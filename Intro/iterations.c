#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int a, b, c;

  printf("Entrez les valeurs de a, b,c (sous la forme a:b:c) : ");
  scanf("%d:%d:%d",&a,&b,&c);
  printf("\n");

  if(a>b){
    if(b>c){
      printf("Le plus grand des entiers est %d.\n",a);
    }
  }
  else if(b>a){
    if(a>c){
      printf("Le plus grand des entiers est %d.\n",b);
    }
  }
  else if(c>a){
    if(a>b){
      printf("Le plus grand des entiers est %d.\n",c);
    }
  }
  else if((a==b) && (b==c)){
     printf("Le plus grand des entiers est %d.\n",a);
  }

  return EXIT_SUCCESS;
}
