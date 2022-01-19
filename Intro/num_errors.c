/*erreurs de calculs avec des nombres entiers*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  short int i;
  unsigned short j;
  int n;

  i=1,j=1;

  printf("\n Puissances de 5 en notation signee \n");
  for(n=1; n<10; n++){
    i=i*5;
    printf("5^%d=%d\n",n,i);
  }

  printf("\n Puissances de 10 en notation non signee \n");
  for(n=1; n<10; n++){
    j=j*5;
    printf("5^%d=%d\n",n,j);
  }

  return EXIT_SUCCESS;

  /* Puissances de 5 en notation signee 
   *5^1=5
   *5^2=25
   *5^3=125
   *5^4=625
   *5^5=3125
   *5^6=15625
   *5^7=12589
   *5^8=-2591 Max short int is 32767 so not enough space to store 5^8
   *5^9=-12955

   *Puissances de 10 en notation non signee 
   *5^1=5
   *5^2=25
   *5^3=125
   *5^4=625
   *5^5=3125
   *5^6=15625
   *5^7=12589 Max unsigned short is 65535 so not enough space to store 5^7
   *5^8=62945
   *5^9=52581
   */

}

  
