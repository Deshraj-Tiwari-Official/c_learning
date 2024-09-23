#include <stdio.h>

int main() {
  // NOTE: Pointers are just variables that are used to store memory adresses
  int a = 10;
  int *b = &a; // or int* b = &a
  int c = 10;

  // INFO: & is the address operator
  printf("a -> value: %d, address: %p\n",a, &a);
  printf("b -> value: %d, address: %p\n",*b, b);
  printf("c -> value: %d, address: %p\n",c, &c);
  return 0;
}

