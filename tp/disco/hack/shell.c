#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) 
{
  char *argv[] = { "/bin/sh" , NULL};

  execve(argv[0], argv, NULL);

  exit(EXIT_FAILURE);
}
