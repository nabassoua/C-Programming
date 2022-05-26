/*for loop manipulations*/

#include <stdio.h>
#include <stdlib.h>

void affiche_ligne(int n, char car);
void affiche_carre(int cote, char car);

void affiche_ligne(int n, char car){

  int i;
  for(i=0;i<n;i++){
    printf("%c ",car);
  }
  printf("\n");

}

void affiche_carre(int cote, char car){

  int i;
  printf("\n");
  for(i=0;i<cote;i++){
    affiche_ligne(cote,car);
  }
    
}

void affiche_triangle(int cote, char car){

  int i;
  for(i=0;i<=cote;i++){
    affiche_ligne(i,car);
  }
    
}

void affiche_triangle2(int cote, char car, int direction){

  int i,j;
  
  if(direction==0){
    for(i=0;i<=cote;i++){
      affiche_ligne(i,car);
    }
  }
  else if(direction==1){
    for(j=cote;j>=0;j--){
      affiche_ligne(j,car);
    }
  }
}

void affiche_grand_triangle(int cote, char car){

  affiche_triangle2(cote,car,0);
  affiche_triangle2(cote-1,car,1);
  
}

void affiche_ligne2(int n1, int n2, char car){

  int i;
  for(i=0;i<n1;i++){
    printf("  ");
  }
  affiche_ligne(n2,car);
  

}



int main(int argc, char *argv[]){

  //int n=5;
  //char car = '*';
  //int direction = 0;
  int n1=3;
  int n2=4;
  char car='*';
  // affiche_ligne(n,car);
  //affiche_carre(n,car);
  //affiche_triangle(n,car);
  //affiche_triangle2(n,car,direction);
  //affiche_grand_triangle(n,car);
  affiche_ligne2(n1,n2,car);
  //affiche_croix(5,car);
  return EXIT_SUCCESS;

 

}
