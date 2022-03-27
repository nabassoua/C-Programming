#include <stdio.h>
#define __USE_GNU
#include <signal.h>
#include <ucontext.h>


void signal_handler(int signb, siginfo_t* signinfo, ucontext_t* context)
{
	char dummy_data = 'X';

	printf("Signal handler\n");
	//context->uc_mcontext.gregs[REG_RAX] = (greg_t) &dummy_data;
}


int main(void) 
{
	char *ptr = NULL;
	char tmp;

/*	
	struct sigaction sigact;
	sigset_t sset;
	sigemptyset(&sset);
	sigaddset(&sset, SIGSEGV); 
	sigact.sa_flags = SA_SIGINFO ;
	sigact.sa_mask = sset;
	sigact.sa_sigaction = (void*) signal_handler;
	sigaction(SIGSEGV, (const struct sigaction *) &sigact, NULL);
*/

	printf("Exception has been generated\n");
	
	tmp = *ptr;

	printf("Exception has been acknowledged, tmp = '%c'\n", tmp);
	
return 0;
}
