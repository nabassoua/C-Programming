/*Affichage de caracteres a la sortie standard*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int i;
  char string[10];
  string[0]='M';
  string[1]='o';
  string[2]='h';
  string[3]='a';
  string[4]='\0'; /*marque la fin de caracteres*/

  printf("String: %s \n", string); /*pas besoin de boucle for ici pour imprimer le mot en entier*/

  /*OUTPUT:
   *String: Moha
   */

  printf("Pour imprimer un caractere par ligne utilisons la boucle for...\n");
  for(i=0; string[i]!='\0'; i++)
    printf("%c \n",string[i]);
  /*Pour imprimer un caractere par ligne utilisons la boucle for...
   *M 
   *o 
   *h 
   *a 
   */

  return EXIT_SUCCESS;
}
