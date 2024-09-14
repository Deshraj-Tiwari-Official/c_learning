#include <stdio.h>

int main() {
  int n = 10;
  for (int i = 1; i <= n; i++) {
    if (i == 7) {
      // break; //exit the loop now
      continue; // skip the iteration now
    }
    printf("The value of i is %d\n", i);
  }
  return 0;
}
