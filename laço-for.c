// Código que repetirá 20 vezes o nome "Unipac". No fim do código o comentário sobre o laço "for".

#include <stdio.h>

int main() {
    int i; // Variável de controle do laço

    // Laço for para repetir 20 vezes
    for (i = 0; i < 20; i++) {
        printf("Unipac\n");
    }

    return 0;
}

//O laço for é composto por três partes: inicialização, condição de continuação e expressão de incremento/decremento.
//A inicialização é executada apenas uma vez no início do laço.
//A condição de continuação é avaliada a cada iteração. Se for verdadeira, o bloco de código é executado. Caso contrário, o laço é encerrado.
//A expressão de incremento/decremento é executada após cada iteração.
//É geralmente utilizado quando o número de iterações é conhecido antecipadamente.

//Principal diferença na hora do uso dos laços:
//A escolha entre esses laços depende das necessidades específicas do problema em questão. O for é comumente utilizado quando se sabe o número 
//exato de iterações. O while é adequado quando a condição de continuação não é conhecida antecipadamente. O do-while é útil quando é necessário 
//executar o bloco de código pelo menos uma vez, mesmo que a condição seja falsa desde o início.
