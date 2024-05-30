#include <stdio.h>

int main(void) {

  
  int n= 50;
  printf("Endereço de memória de n:%p\n", &n);//Mostrando o endereço de memória da variável n.
  
  printf("\nValor dentro de n:%i\n", *&n);//Verificando o endereço de memória da variável n e acessando esse endereço, vai obter obviamente o valor de n.

  int *p = &n;
  printf("\nPonteiro(igual o de cima praticamente): %i\n", *p);
  
//Usando strings:


  char msg [20] = "Ola";
  printf("\nString:%p\n", &msg[0]);//'&msg' mostra o endereço de memória do array, tanto que eu poderia acessar qualquer elemento do array através do índice. Se eu deixasse só 'msg', sem o &, o program iria mostrar apenas o primeiro elemento do array.

  //Exemplo: Compara esse com o de cima:
  printf("\nString:%p\n", msg);



  
  
  return 0;
  
}