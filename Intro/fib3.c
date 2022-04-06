#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Golden ratio*/

int main(int argc, char *argv[]){

  int u0,u1,u,temp1,temp2,n,count;
  double phi,exact_phi,error;
  u0=0;
  u1=1;
  temp1=u0;
  temp2=u1;
  exact_phi=(1+sqrt(5))/2;

  printf("Entrez la valeur de n : ");
  scanf("%d",&n);

  printf("u0=%d \nu1=%d \n",u0,u1); 

  count=2;

  do{
 
    u=temp1+temp2;
    printf("u%d=%d \n",count,u);  
    temp1=temp2;
    temp2=u;
    phi=temp2/(double)temp1;
    error=phi-exact_phi;
    
    printf(" u%d/u%d=%.15lf \n",count,count-1,phi);
    printf(" erreur : %.15lf \n", error);

    count=count+1;
    
  }while(fabs(error)>1e-10); /*1e-10 means 1 times 10 to negative 10*/
    
  
  return EXIT_SUCCESS;

}
