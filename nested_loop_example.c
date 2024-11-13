#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Number of rows for the multiplication table

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}