#include <stdio.h>
#include <string.h>

typedef struct{
  char names[30];
  char numbers[30];
}person;


int main(void) {
  //char names[][30] = {"Brian", "David"};
  //char numbers[][30] = {"+1-617-495-1000", "+1-949-468-2750"};


  //Em C você não pode atribuir uma string a uma matriz de caracteres usando o operador de atribuição direta (o sinal de igual). Em vez disso, você precisa usar a função strcpy() da biblioteca string.h para copiar uma string para outra. 
  
  person people[2];
  strcpy(people[0].names, "Brian");
  strcpy(people[0].numbers, "+1-617-495-1000");

  strcpy(people[1].names, "David");
  strcpy(people[1].numbers, "+1-949-468-2750");
  


  
  for (int i = 0; i < 2; i++){
    if(strcmp(people[i].names, "David") == 0){
      printf("Found %s\n", people[i].numbers);
      return 0;
    }
  }
printf("Not Found!");
  return 1;
}