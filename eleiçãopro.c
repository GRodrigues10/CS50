#include <stdio.h>
#include <string.h>

int main(void) {
  int tamanho;
  int soma = 0;
  int armazena = 0;
    
  
    printf("Digite o número de candidatos à presidência do Brasil:");
    scanf("%i", &tamanho);
    // Limpar o buffer de entrada após a leitura de tamanho
    while (getchar() != '\n');
  
 

  char nome[tamanho][40];
  int votos[tamanho];
  
  for(int i = 0; i < tamanho; i++) {
    printf("Digite o nome do candidato %d: ", i+1);
    fgets(nome[i], 40, stdin);

    printf("Digite o número de votos do candidato %d: ", i+1);
    scanf("%i", &votos[i]);

    // Limpar o buffer de entrada após a leitura de votos
    while (getchar() != '\n');

    soma += votos[i];
     armazena = armazena + soma;
  }
  printf("\nResultado da eleição:\n");
  for(int i = 0; i < tamanho; i++){
    printf("%s: %i votos\n", nome[i], votos[i]); 
   
  }
  printf("O vencedor foi %i ", armazena);
}
