#include <stdio.h>

int main() {
    // If you use scanf to get the value of a string, you can only get things that are behind the first whitespace.
    // Thus, fgets (gets is deprecated) and puts/fputs functions are used. 

    char line[100];
    printf("Enter a line of text: ");

    if (fgets(line, sizeof(line), stdin) != NULL) {
        // Both can be used. There are some differences. Check em out.
        // Also, puts and fputs print the string and automatically put the cursor in the next line.
        puts(line);
        fputs(line, stdout);
    } else {
        printf("Error reading line.\n");
    }

    return 0;
}
