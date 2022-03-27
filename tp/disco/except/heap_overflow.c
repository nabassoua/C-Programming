#include <stdio.h>
#include <stdlib.h>

#define	ONE_MBYTES 1048576

typedef	long unsigned long	uInt64;	

int main(int argc,char* argv[]){
	uInt64 limit_heap_size = 0;
	char* heap_pointer = NULL;

	do{
		limit_heap_size += (uInt64) ONE_MBYTES;
		heap_pointer = (char*) malloc(limit_heap_size);
	
		*heap_pointer = 0; /* to force memory allocation */

		printf(	"Size of heap = %llu\n", limit_heap_size);

		if(heap_pointer != NULL){
			free(heap_pointer);
		}

	}while(heap_pointer != NULL);

return 0;
}
