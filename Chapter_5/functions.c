#include <stdio.h>

// You can either directly declare a function
void display() { printf("Hello there!\n"); }

// Or you can firstly tell the compiler about the function and then declare it
int sum(int, int);
int sum(int num1, int num2) { return num1 + num2; }

int main() {
  display();

  int a, b;

  printf("Enter a number: ");
  scanf("%d", &a);

  printf("Enter another number: ");
  scanf("%d", &b);

  int result = sum(a, b);

  printf("The sum of %d and %d is %d\n", a, b, result);
  return 0;
}
