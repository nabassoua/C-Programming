/*programme qui extrait de l'entree standard
 *les caracteres representant des chiffres
 */

#include <stdio.h>
#include <stdlib.h>

/*retourne vrai si un chiffre, faux sinon*/

int digit(char c){
  return ((c>='0') && (c<='9'));
}

/*affiche un message d'erreur*/

void usage(){
  fprintf(stderr,"Ce programme ne prend pas d'arguments\n");
  exit(EXIT_FAILURE);
}
int main(int argc, char *argv[]){
  char c;
  if (argc > 1)
    usage();
  while((c=getchar())!=EOF){
    if (digit(c))
      putchar(c);
  }

  return EXIT_SUCCESS;
}
