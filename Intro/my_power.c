/*power function in c*/

#include <stdio.h>
#include <stdlib.h>

int puissance(int x, int y);

int puissance(int x, int y){

  int j,product;
  product=1;
  
  for(j=0;j<y;j++){
    product = product*x;
  }
  return product;

}

int main(int argc, char *argv[]){

  int num, exponent,product;
  printf("Please enter a number: ");
  scanf("%d",&num);
  printf("Please enter an exponent: ");
  scanf("%d",&exponent);
  product=puissance(num,exponent);
  printf("The result of %d^%d is: %d \n", num,exponent,product); 
  return EXIT_SUCCESS;

  /*Please enter a number: 2
    Please enter an exponent: 3
    The result of 2^3 is: 8 
  */
  


}
