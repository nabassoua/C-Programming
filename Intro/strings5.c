#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(int argc, char *argv[]){

  char chaine1[]="ABCD";
  int i,j;
  char temp;
  j=3;
  
  printf("La chaine est : ");
  printf("%s \n",chaine1);

  temp = chaine1[3];

  printf("L'inverse de la chaine est : ");
  
  for(i=0;i<4;i++){
    chaine1[i]=temp;
    temp=chaine1[j-1];
    j--;
  }

  printf("%s \n",chaine1);

  /*
    
  */

  
  return EXIT_SUCCESS;

}
