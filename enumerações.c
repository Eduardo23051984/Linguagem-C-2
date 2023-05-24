#include <stdio.h>

// Definindo a enumeração "DiasSemana"
enum DiasSemana {
    SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO, DOMINGO
};

int main() {
    // Criando uma variável do tipo "DiasSemana"
    enum DiasSemana dia = QUARTA;

    // Imprimindo o valor da enumeração
    printf("Dia da semana: %d\n", dia);

    return 0;
}

