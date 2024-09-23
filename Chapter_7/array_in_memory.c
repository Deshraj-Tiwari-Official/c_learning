#include <stdio.h>

int main() {
  int marks[5] = {72, 68, 68, 62, 48};

  printf("The addresses of each continuous element is: ");
  for (int i = 0; i < 5; i++) {
    printf("%u, ", &marks[i]); // NOTE: This proves that arrays are stored contiguously in memory
  }
  return 0;
}
