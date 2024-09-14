#include <stdio.h>

int main() {
  /*
   * There are a lot more data types
   * Each of them have their own size that they take up in the memory
   * It may be different in devices like a computer and an arduino etc.
  */
  int a = 1;
  float b = 3.14;
  char c = 'c'; // Cannot be in double quotes

  printf("The value of a is %d\n", a);
  printf("The value of b is %f\n", b);
  printf("The value of c is %c\n", c);

  // How much size they are taking up
  printf("Size of char: %zu bytes\n", sizeof(char));
  printf("Size of int: %zu bytes\n", sizeof(int));
  printf("Size of float: %zu bytes\n", sizeof(float));
  return 0;
}
