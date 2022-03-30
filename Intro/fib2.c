#include <stdlib.h>
#include <stdio.h>

/*Golden ratio*/

int main(int argc, char *argv[]){

  int u0,u1,u,temp1,temp2,n,count;
  double phi;
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
    phi=temp2/(float)temp1;
    printf(" u%d/u%d=%.15f \n",count,count-1,phi);
    
  }

  /*Entrez la valeur de n : 20
    u0=0 
    u1=1 
    u2=1 
     u2/u1=1.000000000000000 
    u3=2 
     u3/u2=2.000000000000000 
    u4=3 
     u4/u3=1.500000000000000 
    u5=5 
     u5/u4=1.666666626930237 
    u6=8 
     u6/u5=1.600000023841858 
    u7=13 
     u7/u6=1.625000000000000 
    u8=21 
     u8/u7=1.615384578704834 
    u9=34 
     u9/u8=1.619047641754150 
    u10=55 
     u10/u9=1.617647051811218 
    u11=89 
     u11/u10=1.618181824684143 
    u12=144 
     u12/u11=1.617977499961853 
    u13=233 
     u13/u12=1.618055582046509 
    u14=377 
     u14/u13=1.618025779724121 
    u15=610 
     u15/u14=1.618037104606628 
    u16=987 
     u16/u15=1.618032813072205 
    u17=1597 
     u17/u16=1.618034482002258 
    u18=2584 
     u18/u17=1.618033766746521 
    u19=4181 
     u19/u18=1.618034005165100 
    u20=6765 
     u20/u19=1.618034005165100 
  */

  return EXIT_SUCCESS;

}
