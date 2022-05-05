/*power function in c*/

#include <stdio.h>
#include <stdlib.h>

void division(int a, int b, int *quotient, int *reste);

void division(int a, int b, int *quotient, int *reste){

  *quotient = a/b;
  *reste = a%b;
 

}

int main(int argc, char *argv[]){

  int a, b;
  int q, r;
  printf("Please enter a number: ");
  scanf("%d",&a);
  printf("Please enter another number: ");
  scanf("%d",&b);
  division(a,b,&q,&r);
  printf("The quotient of %d/%d is %d and the remainder is %d \n", a,b,q,r);
  return EXIT_SUCCESS;

  /*
    Please enter a number: 5
    Please enter another number: 2
    The quotient of 5/2 is 2 and the remainder is 1 
  */
  


}
