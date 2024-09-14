#include <stdio.h>

int main() {
  int i = 10;
  // Will definitely execute atleast once even if the condition is not satisfied
  do {
    printf("%d\n", i);
    ++i;
  } while (i<=5);
  return 0;
}
