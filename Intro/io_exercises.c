/*Exos simples d'entrees, sorties et formattages*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  char a,b;
  double x1,x2,x3,x4,x5;
  float x6,x7,x8,x9,x10,x11;
  float x12;
  int num;
  int res;
  int heures,minutes,secondes;
  
  x1=1.2345,x2=123.45,x3=0.000012345,x4=1e-10,x5=-123.4568e15;
  x6=12.34567f,x7=1.234567f,x8=1234567,x9=123456.7f,x10=0.1234567f,x11=1234.567f;
  x12=12345678;

  /*Exo1: uTILISATION DE GETCHAR()*/
  
  a=getchar(); /*getchar() lit seulement 1 caractere a la fois*/
  getchar(); /*lecture du deuxieme caractere '\n' dans le tampon*/
  b=getchar();
  putchar(a);
  putchar('\n');
  putchar(b);
  putchar('\n');
  

  /*FIN Exo1*/

  /*Exo2: formattage*/
  
  printf("Affichage avec modulo f:\n");
  printf("\n x1=%f \n x2=%f \n x3=%f \n x4=%f \n x5=%f \n",x1,x2,x3,x4,x5);

  /*Avec modulo f, 6 chiffres sont affiches apres la virgule*/
  
  /*OUTPUT:
    Affichage avec modulo f:

    x1=1.234500 
    x2=123.450000 
    x3=0.000012 
    x4=0.000000 
    x5=-123456800000000000.000000 */

  printf("Affichage avec modulo e:\n");
  printf("\n x1=%e \n x2=%e \n x3=%e \n x4=%e \n x5=%e \n",x1,x2,x3,x4,x5);

  /*Avec modulo e, le nombre afficher est 1.xxxxxxe^yy */

  /*OUTPUT:
    Affichage avec modulo e:

    x1=1.234500e+00 
    x2=1.234500e+02 
    x3=1.234500e-05 
    x4=1.000000e-10 
    x5=-1.234568e+17 */

  /*fin Exo2*/

  /*Exo 3: formattage en utilisant des options pour
   le nombre de places pour afficher le nombre
   et aussi preciser le nombre de chiffres apres la virgule*/
  
  printf("Affichage de float: \n");
  printf("%11.2f \t %9.2f \n %.2f \t %.2f \n %10.2f \t %9.2f \n",x6,x7,x8,x9,x10,x11);

  /*OUTPUT:
      12.35 	      1.23 
 1234567.00 	 123456.70 
       0.12 	   1234.57 */

  /*FIN Exo 3*/

  /*Exo 4: affichage avec 3 formats differents du float 12345678*/

  printf("Affichage avec modulo d: \n");
  printf("x12=%d\n",x12);

  /*warning:format ‘%d’ expects argument of type ‘int’, 
    but argument 2 has type ‘double’ [-Wformat=]*/
  
  /*Affichage avec modulo d: x12=-1691666832*/
  /*le float 12345678 est alors converti en int a cause de modulo d ce qui donne -1691666832*/

  printf("Affichage avec modulo f: \n");
  printf("x12=%f\n",x12);

  /*Affichage avec modulo f: x12=12345678.000000 */

  printf("Affichage avec modulo e: \n");
  printf("x12=%e\n",x12);

  /*Affichage avec modulo e: x12=1.234568e+07*/

  /*Fin Exo 4*/

  /*Exo 5: utilization de scanf() */

  printf("Veuillez entre un entier: \n");
  scanf("%d",&num);
  res=num*3;
  printf("Le triplet est egal a %d \n", res);

  /*Fin Exo 5*/

  /*Exo 6: Lecture avec formattage specific*/

  printf("Entrer l'heure (hh:mm:ss) : ");
  scanf("%d:%d:%d",&heures,&minutes,&secondes);
  printf(" %2d heure(s) \n %2d minute(s) \n %2d seconde(s) \n",heures,minutes,secondes);
  
  return EXIT_SUCCESS;
}
