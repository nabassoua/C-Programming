#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){

  int a, b, c;
  float j, k, l, delta, x, x1, x2;

  printf("Entrez les valeurs de a, b,c (sous la forme a:b:c) : ");
  scanf("%d:%d:%d",&a,&b,&c);
  printf("\n");

  if(a>b && b>c){ 
      printf("Le plus grand des entiers est %d.\n",a);
  }
  else if(a>c && c>b){  
      printf("Le plus grand des entiers est %d.\n",a);
  }
  else if(b>a && a>c){  
      printf("Le plus grand des entiers est %d.\n",b);
  }
  else if(b>c && c>a){ 
      printf("Le plus grand des entiers est %d.\n",b);
  }
  else if(c>a && a>b){   
      printf("Le plus grand des entiers est %d.\n",c);
  }
  else if(c>b && b>a){   
      printf("Le plus grand des entiers est %d.\n",c);    
  }
  else if(a==b && b>c){   
      printf("Le plus grand des entiers est %d.\n",a);   
  }
  else if(b==c && c>a){   
      printf("Le plus grand des entiers est %d.\n",b);
  }
  else if(c==a && a>b){   
      printf("Le plus grand des entiers est %d.\n",c);
  }
  else if(a==b && b<c){   
      printf("Le plus grand des entiers est %d.\n",c);   
  }
  else if(b==c && c<a){   
      printf("Le plus grand des entiers est %d.\n",a);
  }
  else if(c==a && a<b){   
      printf("Le plus grand des entiers est %d.\n",b);
  }
  else if(a==b && a==c){
      printf("Le plus grand des entiers est %d.\n",a);
  }

  printf("Entez les valeurs des coefficients j,k, et l du trinome (j doit etre non nulle). \n"); 
  printf("j = ");
  scanf("%f",&j);
  printf("k = ");
  scanf("%f",&k);
  printf("l = ");
  scanf("%f",&l);
  
  delta = k*k - (4*j*l);
  
  if(delta<0){
    printf("L'equation %.2fx^2 + %.2fx + %.2f = 0 n'admet pas de solution \n",j,k,l);
  }
  else if(delta==0){
    printf("L'equation %.2fx^2 + %.2fx + %.2f = 0 admet exactement une solution : \n",j,k,l);
    x = -k/j;
    printf("%f \n",x);
  }
  else if (delta>0){
    printf("L'equation %.2fx^2 + %.2fx + %.2f = 0 admet deux solutions : \n",j,k,l);
    x1 = (-k + sqrt(delta))/(2*j);
    x2 = (-k - sqrt(delta))/(2*j);
    printf("x1 = %f et x2 = %f . \n",x1,x2);
  }
  
  return EXIT_SUCCESS;
  
}
