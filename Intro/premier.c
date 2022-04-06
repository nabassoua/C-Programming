#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int i,n,divisibility;
  divisibility=1;
  
  printf("Entrez le nombre naturel a tester : ");
  scanf("%d",&n);

  for(i=2;i<=n;i++){
    if(n%i==0){
      divisibility=divisibility+1;
    }
  }

  if(divisibility==2){
    printf("%d est un nombre premier. \n",n);
  }
  else{
    printf("%d n'est pas un nombre premier : il est divisible par 2. \n", n);
  }
  
  return EXIT_SUCCESS;

}
