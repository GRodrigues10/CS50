#include <stdio.h>
#include <string.h>

int main(void) {
  int soma = 0;
  char palavra[100];
  
  printf("Digite uma palavra:");
  fgets(palavra, 100, stdin);
  
  printf("A palavra é:");
  
  int tam = strlen(palavra);
  
  for (int i = 0; i < tam; i++){
    
    if (palavra[i] >= 'a' && palavra[i] <= 'z' || palavra[i] >= 'A' && palavra[i ] <= 'Z'){
      
      soma += palavra[i];
      printf("%c", palavra[i]);
    
    }
    
  }
  printf("\nA soma é %i", soma);
  return 0;
}