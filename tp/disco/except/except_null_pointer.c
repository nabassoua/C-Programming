#include <stdio.h>

int main(void) 
{
	char *unreferenced_pointer = NULL;

    *unreferenced_pointer = 'X';
	
	return 0;
}
