/*Exemple de for-loop*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int i,j,sum;
  sum=1;
  
  for(i=2;i<=10;i++){
    for(j=1;j<(i+1);j++){
      sum = sum +1;
      if (j != 1)printf(" + ");
      printf("%d",j);
    }
    printf(" = %d", sum);
    printf("\n");
  }

  /*OUTPUT
   1 + 2 = 3
   1 + 2 + 3 = 6
   1 + 2 + 3 + 4 = 10
   1 + 2 + 3 + 4 + 5 = 15
   1 + 2 + 3 + 4 + 5 + 6 = 21
   1 + 2 + 3 + 4 + 5 + 6 + 7 = 28
   1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36
   1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 = 45
   1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
  */
    

  return EXIT_SUCCESS;
}
      
  

  

  
