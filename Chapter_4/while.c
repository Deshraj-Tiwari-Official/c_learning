#include <stdio.h>

int main() {
  int i = 1;
  while (i<=10) {
    printf("The value of i is %d\n", i);
    // NOTE: Increment and decrement operators can be like: ++i; i++; --i; i--;
    // There also are operators like +=; -=; *=; etc.
    i++;
  }
  return 0;
}
