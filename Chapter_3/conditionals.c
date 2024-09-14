#include <stdio.h>

int main() {
  int n;
  printf("Enter your age: ");
  scanf("%d", &n);

  // We also have && and || and ! to use in the condition of the conditionals
  if (n < 18) {
    printf("Kiddo\n");
  } else if (n >= 18) {
    printf("\n");
  } else {
    printf("Grown up man :)\n");
  };
  return 0;
}
