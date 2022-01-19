/*affiche ses arguments sur la sortie standard*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int i;
  printf("Le programme a %d argument(s) \n", argc); /*argc est le nombre de parametres*/
  for(i=0;i<argc;i++)
    printf("argument[%d]: %s\n",i,argv[i]); /* argv[] est un tableau contenant tous les arguments*/
  return EXIT_SUCCESS;

  /* ./cmdline 1 abcdef lepl1503 [1, 2, 3]
   * Le programme indique apres execution......
   * Le programme a 7 argument(s) 
   *argument[0]: ./cmdline
   *argument[1]: 1
   *argument[2]: abcdef
   *argument[3]: lepl1503
   *argument[4]: [1,
   *argument[5]: 2,
   *argument[6]: 3]
   */


}
