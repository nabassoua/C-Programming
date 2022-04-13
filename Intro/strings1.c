#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(int argc, char *argv[]){

  char s[MAX];
  int i,nombre;
  nombre=0;
  
  printf("Entrez une chaine de caracteres : ");
  gets(s);
  puts(s);
  i=0;
  
  while(s[i] != '\0'){
    
      nombre++;
      i++;
  }
  
  printf("Il y a %d caracteres dans la chaine \"%s\" \n",nombre,s);

  /*Entrez une chaine de caracteres : abcd abcd abcd
    abcd abcd abcd
    Il y a 14 caracteres dans la chaine "abcd abcd abcd" 
  */

  
  return EXIT_SUCCESS;

}
