#include <stdio.h>

// Definindo a enumera��o "DiasSemana"
enum DiasSemana {
    SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO, DOMINGO
};

int main() {
    // Criando uma vari�vel do tipo "DiasSemana"
    enum DiasSemana dia = QUARTA;

    // Imprimindo o valor da enumera��o
    printf("Dia da semana: %d\n", dia);

    return 0;
}

