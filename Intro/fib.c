#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

  int u0,u1,u,temp1,temp2,n,count;
  u0=0;
  u1=1;
  temp1=u0;
  temp2=u1;

  printf("Entrez la valeur de n : ");
  scanf("%d",&n);

  printf("u0=%d \nu1=%d \n",u0,u1);

  for(count=2;count<=n;count++){

    u=temp1+temp2;
    printf("u%d=%d \n",count,u);
    temp1=temp2;
    temp2=u;
  }

  /*Entrez la valeur de n : 16
    u0=0 
    u1=1 
    u2=1 
    u3=2 
    u4=3 
    u5=5 
    u6=8 
    u7=13 
    u8=21 
    u9=34 
    u10=55 
    u11=89 
    u12=144 
    u13=233 
    u14=377 
    u15=610 
    u16=987 
  */

  return EXIT_SUCCESS;

}
