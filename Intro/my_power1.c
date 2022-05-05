/*power function in c*/

#include <stdio.h>
#include <stdlib.h>

void puissance(int x, int y, int *r);

void puissance(int x, int y, int *r){

  int j;
  *r=1;
  
  for(j=0;j<y;j++){
    *r = *r * x;
  }
 

}

int main(int argc, char *argv[]){

  int num, exponent;
  int resultat;
  printf("Please enter a number: ");
  scanf("%d",&num);
  printf("Please enter an exponent: ");
  scanf("%d",&exponent);
  puissance(num,exponent,&resultat);
  printf("The result of %d^%d is: %d \n", num,exponent,resultat);
  return EXIT_SUCCESS;

  /*Please enter a number: 5
    Please enter an exponent: 5
    The result of 2^3 is: 3125 
  */
  


}
