#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int i,n,diviseur;
  
  printf("Entrez un entier (>2) : ");
  scanf("%d",&n);
  
  printf("%5d est un nombre premier. \n",1);
  printf("%5d est un nombre premier. \n",2);

  for(i=3;i<=n;i++){

    diviseur=2;
    
    while((i%diviseur)!=0 && (diviseur<i)){

      diviseur=diviseur+1;
    }
  
    if(diviseur==i){
    
      printf("%5d est un nombre premier. \n",i);
    }
      
  }
  
  return EXIT_SUCCESS;

}
