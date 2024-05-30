#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[3][40];
    int votos[3];
    int somaVotos = 0;
    int vencedor = 0; // Índice do candidato vencedor

    for(int i = 0; i < 3; i++) {
        printf("Insira o nome do candidato %d: ", i + 1);
        fgets(nome[i], 40, stdin);
        nome[i][strlen(nome[i]) - 1] = '\0'; // Remover o caractere de nova linha

        printf("Insira o número de votos do candidato %s: ", nome[i]);
        scanf("%d", &votos[i]);
        getchar(); // Limpar o buffer de entrada

        somaVotos += votos[i];

        // Verificar se o candidato atual tem mais votos do que o vencedor atual
        if (votos[i] > votos[vencedor]) {
            vencedor = i;
        }
    }

    printf("Os candidatos tiveram os seguintes votos:\n");
    for(int i = 0; i < 3; i++) {
        printf("%s: %d\n", nome[i], votos[i]);
    }

    printf("O candidato %s venceu a eleição com %d votos\n", nome[vencedor], votos[vencedor]);

    return 0;
}