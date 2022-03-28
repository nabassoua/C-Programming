#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

  int nombre;
  int renverse;

  printf("Entrez l'entier a renverse : ");
  scanf("%d",&nombre);

  renverse = 0;

  while(nombre > 0){
    
    /* 1. nombre%10 donne le dernier chifre du nombre
       2. renverse*10 transforme les unites en dizaines, dizaines en
       centaines etc...
       3. cela nous donne une colonne suplementaire d'unites ou nous
       pouvions ajouter le dernier chiffer du nombre durant l'operation (1)
     */
    
    renverse = (renverse * 10) + nombre%10;

    /*Nous divisons successivement le nombre par 10 pour le traverser....
      1234 -> 123 -> 12 -> 1
     */
    
    nombre = nombre/10;
  }

  printf("Resultat : %d\n",renverse);

  /*Entrez l'entier a renverse : 1234
    Resultat : 4321*/
  
  return EXIT_SUCCESS;

}
