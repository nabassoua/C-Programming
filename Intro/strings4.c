#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

  char chaine1[5],chaine2[5];
  int i;
 

  printf("La chaine 1 est : ");
  scanf("%s",chaine1);
    

  printf("La chaine 2 est : ");
  scanf("%s",chaine2);

  i=0;

  while(chaine1[i]==chaine2[i] && chaine1[i]!='\0'){
    i++;
  }

  printf("Resultat: ");
    
  if(chaine1[i]>chaine2[i]){
    printf("%s < %s \n",chaine1,chaine2);
  }
      
  else if(chaine1[i]<chaine2[i]){
	
    printf("%s < %s \n",chaine1,chaine2);
  }
	
  else{
      printf("%s = %s \n",chaine1,chaine2);
  }	
    


  
return EXIT_SUCCESS;

}
