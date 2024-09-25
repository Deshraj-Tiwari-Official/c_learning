#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Deshraj Tiwari";
    char name[50];

    // strlen and strcpy
    printf("%d\n", strlen(str));
    strcpy(name, str);
    printf("%s\n", name);

    // strcat
    char a1[] = "Deshraj";
    char a2[] = " Tiwari";
    printf("%s\n", strcat(a1, a2));


    // strcmp
    // Returns 0 if equal, -ve if a < b, +ve if a > b
    // By > or < we do not only mean what character comes first but rather the ASCII value. What comes first in all ASCII character that includes characters too.
    char b1[] = "Deshraj";
    char b2[] = "Deshraj";
    printf("%d\n", strcmp(b1, b2));
    return 0;
}
