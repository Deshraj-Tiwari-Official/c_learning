#include <stdio.h>

int main() {
  int a = 5;
  int b = 8;
  // contition ? if-true : if-false ;
  a > b ? printf("%d is greater than %d\n", a, b)
        : printf("%d is smaller than %d\n", a, b);
  return 0;
}
