#include <stdio.h>

int main() {
  int a = 9;
  int b = 2;
  float c = a/b; // The operation of integers gives an integer so we get 4 but c is a float so we get 4.000000 instead of 4.5

  float d = 3.0;
  int e = 9;
  int f = d/e;
  printf("The value of %d / %d is %f\n", a, b, c);
  printf("The value of %f / %d is %d\n", d, e, f);
  return 0;
}
