#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  char chaine1[5],chaine2[5],chaine3[9];
  int i,j;

  printf("Entrez la chaine 1: ");
  scanf("%s",chaine1);

  printf("La chaine 1 est : ");
  printf("%s \n",chaine1);

  printf("Entrez la chaine 2: ");
  scanf("%s",chaine2);

  printf("La chaine 2 est : ");
  printf("%s \n",chaine2);

  printf("La chaine 3 est leur concatenation : ");

  i=0;
  j=0;

  while(chaine1[i] != '\0'){
    chaine3[j]=chaine1[i];
    i++;
    j++;
  }

  i=0;

  while(chaine2[i] != '\0'){
    chaine3[j]=chaine2[i];
    i++;
    j++;
  }

  chaine3[j]='\0';

  printf("%s \n",chaine3);

  /*
    
  */

  
  return EXIT_SUCCESS;

}
