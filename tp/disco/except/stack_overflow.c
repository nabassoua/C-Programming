#include <stdio.h>
#include <sys/resource.h>

void goto_segmentation_fault (char* pt_stack_bottom);

int main(void)
{
	char* pt_bottom_of_stack = (char*) &pt_bottom_of_stack;

	/*
	struct rlimit myprogram_ressources; 
	myprogram_ressources.rlim_cur = 16000000; 
	setrlimit (RLIMIT_STACK, &myprogram_ressources);
	*/
	
	goto_segmentation_fault (pt_bottom_of_stack);
	
return 0;
}

void goto_segmentation_fault (char* pt_bottom_of_stack)
{
	char current_top_of_stack;

	printf("Size of stack = %lu\n", pt_bottom_of_stack - &current_top_of_stack);
	
	goto_segmentation_fault (pt_bottom_of_stack);
}
