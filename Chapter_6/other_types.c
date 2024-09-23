#include <stdio.h>

int main() {
    // WARN: You have to use the same data type for a pointer that is to the vairable.
    char name = 'D';
    char* pointer_to_name = &name;

    printf("%p is the address of name stored in our pointer\n", pointer_to_name);
    return 0;
}
