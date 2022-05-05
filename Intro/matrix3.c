/*Matrix addition*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int matrix1[2][2]={{1,2},{3,4}};
  int matrix2[2][3]={{1,2,3},{4,5,6}};
  /*int matrix3[2][3];*/
  
  int i,j;

  printf("Matrix1 is: \n");
  
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf("\t %d",matrix1[i][j]);
    }
    printf("\n");
  }

  printf("Matrix2 is: \n");

  
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      printf("\t %d",matrix2[i][j]);
    }
    printf("\n");
  }
  
  printf("Matrix3 is: \n");
  
  /*
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      matrix3[i][j]=(matrix1[i][j]*matrix2[i][j])+(matrix1[i][j+1]*matrix2[i+1][j]);
      
    } 
  }

  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf("\t %d",matrix3[i][j]);
    }
    printf("\n");
  }
  */
  
 
  return EXIT_SUCCESS;

}
