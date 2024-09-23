#include <stdio.h>

int main() {
    int myArray[3][2];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter myArray[%d][%d]: ", i, j);
            scanf("%d", &myArray[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("\tmyArray[%d][%d]: %d", i, j, myArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}
