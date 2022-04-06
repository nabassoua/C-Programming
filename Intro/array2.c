/*testing signature main function*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int tab1[10];
  int tab2[20];
  int tab3[20];
  
    int i,j,k,l,m;

  printf("Please input 10 integers for tab1: \n");
  for(i=0;i<5;i++){
    printf("Element%d -- : ",i);
    scanf("%d",&tab1[i]);
  }

  printf("here are the 10 elements of tab1: \n");
  
  for(j=0;j<5;j++){
    printf("%d ",tab1[j]);
  }
  printf("\n");

  printf("Please input 10 integers for tab2: \n");
  for(k=0;k<5;k++){
    printf("Element%d -- : ",k);
    scanf("%d",&tab2[k]);
  }

  printf("here are the 10 elements of tab2: \n");
  
  for(l=0;l<5;l++){
    printf("%d ",tab2[l]);
  }
  printf("\n");

  printf("here are the 10 elements of tab3 (sum of tab1 and tab2): \n");
  
  for(m=0;m<5;m++){
    tab3[m] = tab1[m]+tab2[m];
    printf("%d ",tab3[m]);
  }
  printf("\n");
  
  return EXIT_SUCCESS;

}
