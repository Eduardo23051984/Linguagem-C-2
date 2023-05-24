// Código que repetirá 20 vezes o nome "Unipac". No fim do código o comentário sobre o laço "while".

#include <stdio.h>

int main() {
    int contador = 0; // Variável de controle do laço

    // Laço while para repetir 20 vezes
    while (contador < 20) {
        printf("Unipac\n");
        contador++;
    }

    return 0;
}

//O laço while possui apenas a condição de continuação.
//A condição é avaliada antes de cada iteração. Se for verdadeira, o bloco de código é executado. Caso contrário, o laço é encerrado sem executar o bloco.
//É utilizado quando não se sabe antecipadamente o número de iterações ou quando a condição de continuação depende de uma variável externa.

//Principal diferença na hora do uso dos laços:
//A escolha entre esses laços depende das necessidades específicas do problema em questão. O for é comumente utilizado quando se sabe o número 
//exato de iterações. O while é adequado quando a condição de continuação não é conhecida antecipadamente. O do-while é útil quando é necessário 
//executar o bloco de código pelo menos uma vez, mesmo que a condição seja falsa desde o início.
