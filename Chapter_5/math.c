#include <stdio.h>
#include <math.h>

double area_square(int side) {
  double area = pow(side, 2);
  return area;
}

int main() {
  int side;
  printf("Enter the dimension of side of square: ");
  scanf("%d", &side);
  double area = area_square(side);
  printf("The area of the square is %f\n", area);
  return 0;
}
