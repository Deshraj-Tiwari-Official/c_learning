#include <stdio.h>

int main() {
  /*
   * there is no exponentiation operator in c by default (**) is not supported.
   * for exponentiantion, you gotta use the math header
  */
  int i = 10;
  int j = i;
  int a = 2, b = 3, c = 12;
  printf("The value of j is %d.\n", j);
  return 0;
}
