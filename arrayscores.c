#include <stdio.h>

float media(int length, int array[]);

int main(void) {
    int n;
    printf("Digite o total de notas: ");
    scanf("%d", &n);

    int score[n]; // Aqui você deve usar a variável 'n' para definir o tamanho do array, não o valor retornado por printf()

    // Pedir as notas ao usuário
    for (int i = 0; i < n; i++) {
        printf("Digite a nota %d: ", i + 1); // Mensagem mais clara para o usuário
        scanf("%d", &score[i]);
    }

    printf("A média é: %.2f\n", media(n, score)); // Chamar a função 'media' com os parâmetros corretos

    return 0;
}

float media(int length, int array[]) {
    int soma = 0;
    for (int i = 0; i < length; i++) {
        soma += array[i];
    }
    return soma / (float)length;  
}