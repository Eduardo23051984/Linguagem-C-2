#include <stdio.h>

// Definindo a uni�o "Dados"
union Dados {
    int inteiro;
    float flutuante;
    char caractere;
};

int main() {
    // Criando uma vari�vel do tipo "Dados"
    union Dados dados;

    // Atribuindo valores � uni�o
    dados.inteiro = 10;
    printf("Valor inteiro: %d\n", dados.inteiro);

    dados.flutuante = 3.14;
    printf("Valor flutuante: %f\n", dados.flutuante);

    dados.caractere = 'A';
    printf("Valor caractere: %c\n", dados.caractere);

    return 0;
}

