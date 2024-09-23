#include <stdio.h>

int main() {
    int arr[5] = {72, 68, 68, 62, 48};
    int *ptr = arr; // NOTE: This is the same as int *ptr = &arr[0]; (Thanks C)

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *ptr);
        ptr++;
    }
    return 0;
}

