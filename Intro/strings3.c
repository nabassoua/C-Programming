#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  char chaine1[]="abcd",chaine2[5];
  int i,j;
  j=3;

  printf("La chaine 1 est : ");
  printf("%s \n",chaine1);

  printf("La chaine 2 est son inverse : ");
  
  for(i=0;i<5;i++){
    chaine2[i]=chaine1[j];
    j--;
  }

  printf("%s \n",chaine2);

  /*
    La chaine 1 est : abcd 
    La chaine 2 est son inverse : dcba 
  */

  
  return EXIT_SUCCESS;

}
