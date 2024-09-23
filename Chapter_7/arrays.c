#include <stdio.h>

int main() {
  int arr[100];
  // NOTE: Total elements in the array at max can be 100 which is arr[0] to arr[99]. You can not get arr[100]
  for (int i = 1; i <= 100; i++) {
    arr[i] = i;
  }
  for (int i = 1; i <= 100; i++) {
    printf("%d\n", arr[i]);
  }
}
