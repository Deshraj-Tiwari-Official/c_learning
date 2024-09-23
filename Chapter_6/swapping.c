#include <stdio.h>

void swap(int *a, int *b);
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x = 10, y = 20;
  printf("x -> %d\n", x);
  printf("y -> %d\n", y);
  swap(&x, &y);
  printf("\tx -> %d\n", x);
  printf("\ty -> %d\n", y);
  return 0;
}
