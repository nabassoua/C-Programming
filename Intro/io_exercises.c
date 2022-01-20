/*Exos simples d'entrees, sorties et formattages*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  char a,b;

  /*Exo1: uTILISATION DE GETCHAR()*/
  
  a=getchar(); /*getchar() lit seulement 1 caractere a la fois*/
  getchar(); /*lecture du deuxieme caractere '\n' dans le tampon*/
  b=getchar();
  putchar(a);
  putchar('\n');
  putchar(b);
  putchar('\n');

  /*FIN Exo1*/

  /*Exo2: ...*/
  
  return EXIT_SUCCESS;
}
