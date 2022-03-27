#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pointer_to_heap;

	pointer_to_heap = (char *) malloc(1000);

	printf("Pointer to code segment = 0x%llX\n", (unsigned long long int) main);
	printf("Pointer to stack segment = 0x%llX\n", (unsigned long long int) &pointer_to_heap);
	printf("Pointer to heap segment = 0x%llX\n\n", (unsigned long long int) pointer_to_heap);

	printf("[CTRL] + [c] to kill process ...\n");
	
	while(1);	
	
	return 0;
}

