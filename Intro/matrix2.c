/*Matrix multiplcation*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int matrix1[][2]={{1,2},{3,4}};
  int matrix2[][2]={{5,6},{7,8}};
  int matrix3[2][2];
  
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
    for(j=0;j<2;j++){
      printf("\t %d",matrix2[i][j]);
    }
    printf("\n");
  }
  
  printf("Matrix3 is: \n");

  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
    } 
  }

  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf("\t %d",matrix3[i][j]);
    }
    printf("\n");
  }

  /*     Matrix1 is: 
	 1	 2
	 3	 4
	 Matrix2 is: 
	 5	 6
	 7	 8
	 Matrix3 is: 
	 6	 8
	 10	 12
  */
 
  return EXIT_SUCCESS;

}
