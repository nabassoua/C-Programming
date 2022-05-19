/*exchanging variables*/

#include <stdio.h>
#include <stdlib.h>

void permute(int *x, int *y);

void permute(int *x, int *y){

  int temp = *x;
  *x = *y;
  *y = temp;
  

}

int main(int argc, char *argv[]){

  int x, y;
  printf("Please enter a number: ");
  scanf("%d",&x);
  printf("Please enter an exponent: ");
  scanf("%d",&y);
  permute(&x,&y);
  printf("Permuting x and y gives: %d and  %d \n", x,y);
  return EXIT_SUCCESS;

  /*
  */
  


}
