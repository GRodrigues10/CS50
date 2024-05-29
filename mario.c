#include<stdio.h>
int main(){
  int altura;
  /* 
    Verifica se altura é menor que 1 ou menor que 8.
    Caso seja, o programa continua pedindo uma nova altura.
  */
  do{
    
    printf("Altura:");
    scanf("%d",&altura);
  }while(altura < 1 || altura > 8);



  /* 
    For 1: O primeiro for inicia i com 1, verifica se i é menor o igual 
  a variável altura(valor digitado pelo usuário) e depois incrementa.

    For 2: O segundo for alinha a pirâmide para a direita, a variável espaco começa com 0 e verifica se espaco é < que altura - i, depois incrementa. EX: Se altura for = 5 e i = 1, será contabilizados 4 espaços.


    For 3: Ele é  resposável por verificar se o j é menor que i, caso seja menor, ele imprime a #, caso não seja, ele não imprime nada e programa volta para o For 1 pulando uma linha, já que o printf("\n") está é o comando de pular linha. IMPORTANTE: O For 3 não conta os numeros de #, quem faz isso é o For 1, o For3 apenas verifica se j é menor que i, caso seja, ele imprime a #.
  
  
  */
  for(int i = 1; i <= altura; i++){
  for(int espaco = 0; espaco < altura - i; espaco++){
    printf(" ");
  }

    
    for(int j = 0; j < i; j++){

      printf("#");
      
    }
    printf( "\n");
  }
}