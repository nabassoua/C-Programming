/*testing signature main function*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int tab1[10];
  int i,j,k,min;

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

  printf("The minimum is: ");
  
  min=tab1[0];
  
  for(k=1;k<5;k++){
    
     if(tab1[k]<min){
       min=tab1[k];
     }    
  }
  printf("%d \n",min);

  /*Please input 10 integers for tab1: 
    Element0 -- : 20
    Element1 -- : 1000
    Element2 -- : 0
    Element3 -- : -3
    Element4 -- : 4
    here are the 10 elements of tab1: 
    20 1000 0 -3 4 
    The minimum is: -3 
  */
  
  return EXIT_SUCCESS;

}
