#include <stdlib.h>

int main(void) 
{
    char *pointer_to_heap;
 
	#if defined(__GNUC__)
	# if defined(__i386__)
		__asm__("pushf\norl $0x40000,(%esp)\npopf");
	# elif defined(__x86_64__) 
		__asm__("pushf\norl $0x40000,(%rsp)\npopf");
	# endif
	#endif
 
    pointer_to_heap = (char *) malloc(100);

    /* unaligned access */
    *pointer_to_heap = 'X';
 
    return 0;
}
