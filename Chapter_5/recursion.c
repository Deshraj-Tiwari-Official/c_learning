#include <stdio.h>

int factorial(int);
// factorial(3) = 1 * 2 * 3
// factorial(2) = 1 * 2
// factorial(1) = 1

// NOTE:

// factorial(n) = 1 * 2 * 3 ... * n-1 * n
// factorial(n-1) = 1 * 2 * 3 ... * n-1
// factorial(n) = factorial(n-1) * n

int factorial(int number) {
  // Base condition
  if (number == 1 || number == 0) {
    return 1;
  }
  return number * factorial(number - 1);
}

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  long result = factorial(number);
  printf("The factorial of %d is %ld\n", number, result);
  return 0;
}
