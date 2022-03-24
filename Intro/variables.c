/*Les variables*/

#include <stdio.h>
#include <stdlib.h>

short a, b, c;
char ca;
int num1, num2;
int x,y;
float u,v;

int main(int argc, char *argv[]){

  short d, e, f;
  

  x=5,y=15;
  u=2.1,v=5.0;

  printf("Addresses de a, b et c declarees hors de main(): \n");
  printf("&a:%p \t &b:%p \t &c:%p \n", &a, &b, &c);

  printf("Addresses de d, e et f declarees dans main(): \n");
  printf("&d:%p \t &e:%p \t &f:%p \n", &d, &e, &f);

  printf("Addresses de g, h et i declarees dans  fonction(): \n");
  fonction1();
  
  short g, h, i;
  printf("Addresses de g, h et i declarees dans main(): \n");
  printf("&g:%p \t &h:%p \t &i:%p \n", &g, &h, &i);

  /*Addresses de a, b et c declarees hors de main() - variables globales (segments de donnees)
    &a:0x5639d67bb016 	 &b:0x5639d67bb012 	 &c:0x5639d67bb014 
    Addresses de d, e et f declarees dans main() - stockees dans la pile 
    &d:0x7ffc0a38cf8c 	 &e:0x7ffc0a38cf8e 	 &f:0x7ffc0a38cf90 
    Addresses de g, h et i declarees dans  fonction() - stockees dans la pile 
    &g:0x7ffc0a38cf52 	 &h:0x7ffc0a38cf54 	 &i:0x7ffc0a38cf56 
    Addresses de g, h et i declarees dans main() - stockees dans la pile 
    &g:0x7ffc0a38cf92 	 &h:0x7ffc0a38cf94 	 &i:0x7ffc0a38cf96 
  */

  /*Convertion de majiscule a miniscule*/

  printf("Entrez le caractere a traiter: ");
  scanf("%ca", &ca);
  if('A' <= ca && ca <= 'Z'){
    printf("Majiscule....converti a la minisucle \n");
    ca = ca +('a'-'A');
  }
  printf("Caractere apres le traitement: %c \n", ca);

  /*division entiere*/
  printf("Entrez le premier operande: ");
  scanf("%d",&num1);
  printf("Entrez le deuxieme operande: ");
  scanf("%d",&num2);
  printf("%d = %d * %d + %d \n", num1, num2, num1/num2, num1 % num2);
  /* ---- 17 = 5 * 3 + 2 -----*/

  /*division relle*/
  printf("Entrez le premier operande: ");
  scanf("%d",&num1);
  printf("Entrez le deuxieme operande: ");
  scanf("%d",&num2);
  printf("%d/%d = %f \n", num1, num2, (float)num1/num2);
  /* ---- 10/4 = 2.500000 -----*/

  /*Boolean expressions*/

  printf("x==x : %d\n",x==x);
  printf("x==y : %d\n",x==y);
  printf("x==u : %d\n",x==u);
  printf("x==v : %d\n",x==v);
  printf("x>4 || x<3 : %d\n",x>4 || x<3);
  printf("x>4 && x<3 : %d\n",x>4 && x<3);
  if(x)
    printf("(x):vrai \n");
  else
    printf("(x):faux \n");
  printf("x=7 : %d\n",x=7);
  printf("x : %d\n",x);
  printf("x=(7!=8) : %d\n",x=(7!=8));
  printf("x= : %d\n",x);
  printf("(float)x : %d\n",(float)x);

  /*x==x : 1
    x==y : 0
    x==u : 0
    x==v : 1
    x>4 || x<3 : 1
    x>4 && x<3 : 0
    (x):vrai 
    x=7 : 7
    x : 7
    x=(7!=8) : 1
    x= : 1
    (float)x : 1229197920

  */

  
return EXIT_SUCCESS;

}
   

void fonction1()
{
  short g, h, i;
  printf("&g:%p \t &h:%p \t &i:%p \n", &g, &h, &i);
}

  
