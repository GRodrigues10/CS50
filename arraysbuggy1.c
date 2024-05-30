#include <stdio.h>
//Prototype
int get_negative_int();

int main(void){
    //Get negative integer from user
    int i = get_negative_int();
    printf("%i",i);
}

int get_negative_int(){
    int n;
    do{
        n = printf("Digite um número negativo:");
      scanf(" %i",&n);
      
    }while(n >= 0);//Bug consertado.
    return n;
}
