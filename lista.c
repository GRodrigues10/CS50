#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *lista = malloc(3 * sizeof(int));//A maneira malloc de criar um array com 3 elementos.
  if(lista == NULL){// Verifica se tem memória disponível.
    return 1;
  }

  lista[0] = 1;
  lista[1] = 2;
  lista[2] = 3;

  int *temp = realloc(lista, 4 * sizeof(int));//Realocando dinamicamente mais espaço para o array.
  
  if(temp == NULL){//Se temp for NULL vamos sair do programa!
    free(lista);// Liberando a memória alocada anteriormente.
    return 1;
  }

  /*for(int i = 0; i < 3; i++){
    temp[i] = lista[i];//Não preciso usar mais isso, pq usei o realloc para copiar os elementos de lista para temp.
    
  }*/
  temp[3] = 6;//Inseriu um novo elemento na variável temporária.
  
 
  
  lista = temp;//Fez a lista antiga apontar para a variável temporária. Dessa forma 'adquirindo' devido ao apontamento do bloco de memória, todos os elementos da lista temp. Não é necessário liberar o tmp pq eu já o atribuí a lista, que por sua vez foi liberado no final desse programa!

  for(int i = 0; i < 4; i++){
    printf("%d\n", lista[i]);//Impressão da lista atualizada
  }
  
   free(lista);//Liberou a lista antiga.
  
  return 0;//Se você não incluir return 0;, o programa ainda funcionará, mas é importante colocar para seguir a convenção padrão de indicar um término bem-sucedido com 0.
  
}


