#include <stdio.h>

int main(void) {
  char s [4];
  for(int i = 0; s[i] != '\0'; i++) {
    printf("%s\n", s[i]);
  }  
  
  return 0;
}