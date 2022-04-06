/*testing signature main function*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int n[5];
  int i,j;

  for(i=0;i<5;i++){
    scanf("%d",&n[i]);
  }

  printf("The elements of n are: \n");
  
  for(j=0;j<5;j++){
    printf("%d ",n[j]);
  }
  printf("\n");
  
  return EXIT_SUCCESS;

}
