#include <stdio.h>

int main(void) {
  int numbers[] = {2, 7, 5, 6, 8, 9, 4};
  for (int i = 0; i < 7; i++) {
    if (numbers[i] == 5) {
      printf("Found");
      return 0;
    }
  }
  printf("Not Found");
  return 1;
}