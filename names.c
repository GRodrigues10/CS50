#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[][10] = {"Ana", "Gabriel", "José", "Maria", "Pedro", "Sofia"};
 int found = 0;
  //int tam = strlen(nome);
  
  for(int i =0; i < 6; i ++){
    if(strcmp(nome[i], "Gabriel") == 0)
    {
      printf("Found!");
      found = 1;
      break;
    }
  }
  if(!found){
    printf("Not Found!");
    
  }

  
}