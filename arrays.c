#include <stdio.h>

int main(void) {
  char nome[30];
  printf("What your name? \n\nName: ");
  fgets(nome, 30, stdin);

  printf("O seu nome é %s", nome);
    

  
  return 0;
}