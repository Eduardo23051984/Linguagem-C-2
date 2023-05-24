#include <stdio.h>

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i = 0, j = 0;

    while (i < 3) {
        j = 0;
        while (j < 3) {
            printf("%d ", matriz[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

