#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[]){

  int n,guess,tentative,score;
  tentative=1;
  score=0;
  srand(time(NULL));
  n=1+rand()%100;

  printf("J'ai tire un nombre au hazard : essayez de le deviner : \n");
  printf("Le nombre a deviner est %d \n",n);
  printf(" Premiere tentative: ");
  scanf("%d",&guess);

  do{

    tentative=tentative+1;
    

    if(guess==n){
      printf(" Oui, c'est bien ca (%d) ! Bravo, vous avez gagne : \n", guess);
    }
    
    else if(guess>n){
      printf(" La valeur %d est trop grande.\n",guess);
      printf(" Tentative %d ? ",tentative);
      scanf("%d",&guess);
      if(guess==n){
	printf(" Oui, c'est bien ca (%d) ! Bravo, vous avez gagne : \n", guess);
      }
    }
    else if(guess<n){
      printf(" La valeur %d est trop petite.\n",guess);
      printf(" Tentative %d ? ",tentative);
      scanf("%d",&guess);
      if(guess==n){
	printf(" Oui, c'est bien ca (%d) ! Bravo, vous avez gagne : \n", guess);
      }
    }
    score=tentative;
   
    
  }while(guess!=n);

  printf("Votre score est : %d \n", score);

  return EXIT_SUCCESS;

}
