// Código que repetirá 20 vezes o nome "Unipac". No fim do código o comentário sobre o laço "do-while".

#include <stdio.h>

int main() {
    int contador = 0; // Variável de controle do laço

    // Laço do-while para repetir 20 vezes
    do {
        printf("Unipac\n");
        contador++;
    } while (contador < 20);

    return 0;
}

//O laço do-while possui a condição de continuação no final, após o bloco de código.
//O bloco de código é executado pelo menos uma vez, independentemente da condição ser verdadeira ou falsa.
//Após a execução do bloco, a condição é avaliada. Se for verdadeira, o laço continua. Caso contrário, o laço é encerrado.
//É utilizado quando é necessário garantir que o bloco de código seja executado pelo menos uma vez, independentemente da condição.

//Principal diferença na hora do uso dos laços:
//A escolha entre esses laços depende das necessidades específicas do problema em questão. O for é comumente utilizado quando se sabe o número 
//exato de iterações. O while é adequado quando a condição de continuação não é conhecida antecipadamente. O do-while é útil quando é necessário 
//executar o bloco de código pelo menos uma vez, mesmo que a condição seja falsa desde o início.
