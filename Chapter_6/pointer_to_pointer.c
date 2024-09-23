#include <stdio.h>

int main() {
    int a = 10;
    int *b = &a;
    int **c = &b;
    printf("%p -> c\n%p -> b\n%p -> a\n", c, b, &a);
    printf("%d is the value of c\n", **c);

    // NOTE: You can assume that for each & operator, there is only one * operator, so one pair gets cancelled. Eg:
    printf("%d is the value of pointer c\n", ***(&c)); // c == &(b) == &{&(a)} -> c == &&a. Now, take a look at the print statement again
    return 0;
}
