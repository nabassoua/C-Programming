#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(int argc, char *argv[]){

  int n,v,i,diviseur;
  
  
  printf("Entrez un entier (>2) : ");
  scanf("%d",&v);
  int premier[MAX];

  premier[0]=1;
  premier[1]=2;
  
  printf("%5d est un nombre premier. \n",premier[0]);
  printf("%5d est un nombre premier. \n",premier[1]);

  i=2;
  
  for(n=3;n<=v;n++){

    diviseur=2;
    
    while((n%diviseur)!=0 && (diviseur<n)){

      diviseur=diviseur+1;
    }
  
    if(diviseur==n){

      premier[i]=n;
      i++;
      
    }
    for(n=0;n<i;n++){
      printf("%5d est un nombre premier. \n",premier[n]);
      
    }
  }
  
  return EXIT_SUCCESS;

}
