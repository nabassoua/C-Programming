#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(int argc, char *argv[]){

  char chaine1[MAX],chaine2[MAX];
  int i;
 
  
  printf("Entrez une chaine de caracteres : ");
  gets(chaine1);
  
  

  printf("La chaine 2 est : ");
  
  for(i=0;i<MAX;i++){
    chaine2[i]=chaine1[i];
  }

  printf("%s \n",chaine2);

  /*
    Entrez une chaine de caracteres : abc
    La chaine 2 est : abc 
  */

  
  return EXIT_SUCCESS;

}
