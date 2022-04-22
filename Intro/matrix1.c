/*testing signature main function*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int N,i,j;
  
  printf("Please enter N: ");
  scanf("%d",&N);

  int matrix1[N][N];

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(i==j){
	matrix1[i][j]=1;
      }
      else{
	matrix1[i][j]=0;
      }
    }
  }

  printf("The 2D Table is: \n");

  
  /*for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      printf("matrix1[%d][%d] = %d \n",i,j,matrix1[i][j]);
    }
    }*/
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      printf("\t %d",matrix1[i][j]);
    }
    printf("\n");
  }
  return EXIT_SUCCESS;

}
