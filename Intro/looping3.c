#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

  int i,j,sum,n;
  sum = 1;

  printf("Entrez n ou une valuer<=0 pour terminer: ");
  scanf("%d",&n);

  do{
  
      for(i=2;i<=n;i++){   
	for(j=1;j<i;j++){       
	  printf("%d + ",j);
	}
	sum = sum + i;
	printf("%d = %d \n", i, sum);
   
      }

      sum =1;
      
      printf("Entrez n ou une valuer<=0 pour terminer: ");
      scanf("%d",&n);
      
      if(n<=0){
	printf("\n");
      }
    
  }while(n>0);

  /*Entrez n ou une valuer<=0 pour terminer: 2
    1 + 2 = 3 
    Entrez n ou une valuer<=0 pour terminer: 4
    1 + 2 = 3 
    1 + 2 + 3 = 6 
    1 + 2 + 3 + 4 = 10 
    Entrez n ou une valuer<=0 pour terminer: -1

  */
  
  return EXIT_SUCCESS;

}
