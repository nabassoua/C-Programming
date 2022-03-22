/*Les variables*/

#include <stdio.h>
#include <stdlib.h>

short a, b, c;
char ca;

int main(int argc, char *argv[]){

  short d, e, f;

  printf("Addresses de a, b et c declarees hors de main(): \n");
  printf("&a:%p \t &b:%p \t &c:%p \n", &a, &b, &c);

  printf("Addresses de d, e et f declarees dans main(): \n");
  printf("&d:%p \t &e:%p \t &f:%p \n", &d, &e, &f);

  printf("Addresses de g, h et i declarees dans  fonction(): \n");
  fonction();
  
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
  if('A' <= ca <= 'Z'){
    printf("Majiscule....converti a la minisucle \n");
  }
  printf("Caractere apres le traitement: %c \n", ca);
  
  return EXIT_SUCCESS;

}
   

void fonction()
{
  short g, h, i;
  printf("&g:%p \t &h:%p \t &i:%p \n", &g, &h, &i);
}

  
