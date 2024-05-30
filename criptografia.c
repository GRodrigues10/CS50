#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char palavra[100];
  printf("Digite uma palavra para ser criptografada: ");
  fgets(palavra, 100, stdin);
int tamanho = strlen(palavra);
  for(int i = 0; i < tamanho; i++){
  
      printf("%c", (palavra[i]  + 7) + 2);
    
  }

    return 0;
}