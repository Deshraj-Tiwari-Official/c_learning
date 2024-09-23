#include <stdio.h>
int sum(int* a, int* b){
    // NOTE: This function will change the value of the pointer passed in. Thus it changes the original x variable
    *a = 5;
    return *a + *b;
}

int main()
{
    int x = 10, y = 20;
    printf("The sum of %d and %d is %d\n", x, y, sum(&x, &y));
    return 0;
}
