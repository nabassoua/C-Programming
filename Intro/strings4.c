#include <stdio.h>
#include <stdlib.h>
#define MAX 100


int main(int argc, char *argv[]){

  char chaine1[MAX],chaine2[MAX];
  /*int i,j;*/
  int i;
  char temp;
    

  printf("La chaine 1 est : ");
  scanf("%s",chaine1);
    

  printf("La chaine 2 est : ");
  scanf("%s",chaine2);

  temp=chaine1[0];
    

  for(i=0;i<MAX;i++){
        
      if(chaine2[i]<temp){
	temp=chaine2[i];
	/*printf("%s < %s \n",chaine1,chaine2);*/
      }
      
      else if(chaine2[i]>temp){
	
	printf("%s > %s \n",chaine1,chaine2);
      }
	
      else{
	printf("%s > %s \n",chaine1,chaine2);
      }	
    
  }

  for(i=0;i<MAX1;i++){
    if(chaine1[i]==chaine2[i]){
      printf("%s == %s \n",chaine1,chaine2);
    }
  }
    
  /*
   
  */

  
  return EXIT_SUCCESS;

}
