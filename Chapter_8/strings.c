#include <stdio.h>
int main() {
    // A string is basically an array of characters, and \0 (null character) denotes that the string ended.
    char name[] = {'D', 'e', 's', 'h', 'r', 'a', 'j', '\0'};
    char str[] = "Hello, World!"; // In double quotes, used to create strings, the null character is automatically added at the end of the string

    // Both of them work the same way. To print a string, the %s format specifiter is used. It can also be used with scanf.
    printf("Name: %s\n", name);
    printf("String: %s\n", str);

    return 0;
}
