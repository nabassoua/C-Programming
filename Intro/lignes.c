/*for loop manipulations*/

#include <stdio.h>
#include <stdlib.h>

void affiche_ligne(int n, char car);
void affiche_carre(int cote, char car);

void affiche_ligne(int n, char car){

  int i;
  for(i=0;i<n;i++){
    printf("%c ",car);
  }
  printf("\n");

}

void affiche_carre(int cote, char car){

  int i;
  printf("\n");
  for(i=0;i<cote;i++){
    affiche_ligne(cote,car);
  }
    
}

int main(int argc, char *argv[]){

  int n=5;
  char car = '+';
  affiche_ligne(n,car);
  affiche_carre(n,car);
  return EXIT_SUCCESS;

 

}
