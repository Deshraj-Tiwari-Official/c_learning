#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Addresses of:\n\n");
    printf("a -> %u\np -> %u\n", &a, p);
    p++; // It is increased by 4 because on this architecture, the size of an int is 4 bytes.
         // If this had been done for a character, it would be increased by 1 byte.
    printf("\ta -> %u\n\tp -> %u\n", &a, p);

    return 0;
}
