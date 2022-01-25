/*Types simples....*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  /*ASCII sont compris entre 0 et 255 alors que signed char est limite 
   *aux valeurs entre -128 et 127*/
  
  unsigned char c; /*ne pas utiliser 'char c'*/
  
  int b;
  unsigned int x1,x2;
  signed int x3,x4;
  short x5,x6,sum;
  float x7;

  x1=12;
  x2=4294967284;
  x3=12;
  x4=4294967284;
  x7=0.1f;
  
  /*Exo1: ASCII*/

  printf("Entrez un caractere: ");
  scanf("%c",&c);
  printf("Le code ASCII de %c est %d \n", c,c);

  /*OUTPUT:
    Entrez un caractere: e
    Le code ASCII de e est 101 */

  /*End Exo1*/


  /*Exo2: ASCII */

  printf("Entrez le code ASCII: ");
  scanf("%d",&b);
  printf("Le caractere correspondant au code ASCII %d est \'%c\' \n", b,b);

  /*Fin Exo2*/

  /*Exo 3: affichage d'entiers*/

  printf("Au format entier non signe:\n");
  printf("12 et 4294967284 en entiers non signes sont %u et %u \n",x1, x2);

  /*OUTPUT:
    Au format entier non signe:
    12 et 4294967284 en entiers non signes sont 12 et 4294967284 
  */

  printf("Au format entier signe:\n");
  printf("12 et 4294967284 en entiers non signes sont %d et %d \n",x3, x4);

  /*OUTPUT:
    Au format entier signe:
    12 et 4294967284 en entiers non signes sont 12 et -12 */

  /*4,294,967,284 est superieur a 2,147,483,617 (Max signed int),
   donc il est hors de l'interval et par consequent nous avons
   l'affichage -12 qui n'est pas correct*/

  printf("Affichage de constantes: \n");
  printf("12 et 4294967284 en entier naturel hexadecimal sont %x et %x \n",12,4294967284);

  /*OUTPUT:
    Affichage de constantes: 
    12 et 4294967284 en entier naturel hexadecimal sont c et fffffff4 */

  printf("12 et 4294967284 en entiers non-signes sont %u et %u \n",12,4294967284);

  /*OUTPUT:
    12 et 4294967284 en entiers non-signes sont 12 et 4294967284 */

  printf("12 et 4294967284 en entiers signes sont %d et %d \n",12,4294967284);

  /*OUTPUT:
    12 et 4294967284 en entiers signes sont 12 et -12 */

  printf("4 en decimal est %d, en octal %o et hexadecimal %x \n", 4,4,4);

  /*OUTPUT:
    4 en decimal est 4, en octal 4 et hexadecimal 4 */

  printf("-4 en decimal est %d, en octal %o et hexadecimal %x \n", -4,-4,-4);

  /*OUTPUT:
    -4 en decimal est -4, en octal 37777777774 et hexadecimal fffffffc */

  /*Les formats octal et hexadecimal permettent d'afficher seulement des
   *valeurs non-signees*/

  /*FIN Exo 3*/

  /*Exo 4 addition de short*/

  printf("Entrer 2 shorts: ");
  scanf("%hd%hd",&x5,&x6); /* utiliser %d pour lire un short*/
  sum = x5 + x6;
  printf("Le resultat de l'addition est: ");
  printf("%d + %d = %d \n",x5,x6,sum);

  /*OUTPUT:
    Entrer 2 shorts: 56 -33333
    Le resultat de l'addition est: 56 + 32203 = 32259 */

  /*Resultat incorrect car -33333 est hors de l'interval des short*/

  /*OUTPUT:
    Entrer 2 shorts: 18000 19000
    Le resultat de l'addition est: 18000 + 19000 = -28536 */

  /*Resultat incorrect car le resultat correct 37000 est trop grand pour un short
    Le max pour un short (signed) est 32767*/

  /*Fin Exo 4*/

  /*Exo 5: Reels */

  printf("Affichage de x7 avec 1 chiffre apres la virgule: ");
  printf("x7=%.1f \n",x7);

  printf("Affichage de x7 avec 10 chiffre apres la virgule: ");
  printf("x7=%.10f \n",x7);

  /*OUTPUT:
    Affichage de x7 avec 1 chiffre apres la virgule: x7=0.1 
    Affichage de x7 avec 10 chiffre apres la virgule: x7=0.1000000015 */

  /*Fin Exo 5*/

  /*Exo 6: Operations sur les reels*/

  printf("Le resultat de (1e-9+1e9)-1e9 est: ");
  printf("%.10f \n",(1e-9+1e9)-1e9);

  printf("Le resultat de 1e-9+(1e9-1e9) est: ");
  printf("%.10f \n",1e-9+(1e9-1e9));

  /*OUTPUT:
    Le resultat de (1e-9+1e9)-1e9 est: 0.0000000000 
    Le resultat de 1e-9+(1e9-1e9) est: 0.0000000010 */


  /*Fin Exo 6*/

  
  return EXIT_SUCCESS;
}

  
  
