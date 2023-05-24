#include <stdio.h>

int main() {
    char nome[] = "AlfaUnipac";
    int i = 0;

    while (nome[i] != '\0') {
        printf("%c", nome[i]);
        i++;
    }

    return 0;
}

