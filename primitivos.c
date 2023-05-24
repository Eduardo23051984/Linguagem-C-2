#include <stdio.h>
#include <stdbool.h>

int main() {
    // Inteiro (int)
    int numeroInteiro = 42;
    printf("Inteiro: %d\n", numeroInteiro);

    // Caractere (char)
    char caractere = 'A';
    printf("Caractere: %c\n", caractere);

    // Flutuante (float e double)
    float numeroFlutuante = 3.14;
    double numeroDuplo = 2.71828;
    printf("Flutuante: %f\n", numeroFlutuante);
    printf("Double: %lf\n", numeroDuplo);

    // Ponteiro
    int numero = 10;
    int* ponteiro = &numero;
    printf("Ponteiro: %p\n", (void*)ponteiro);

    // Booleano (bool)
    bool valorBool = true;
    printf("Booleano: %d\n", valorBool);

    return 0;
}

