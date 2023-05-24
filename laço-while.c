// C�digo que repetir� 20 vezes o nome "Unipac". No fim do c�digo o coment�rio sobre o la�o "while".

#include <stdio.h>

int main() {
    int contador = 0; // Vari�vel de controle do la�o

    // La�o while para repetir 20 vezes
    while (contador < 20) {
        printf("Unipac\n");
        contador++;
    }

    return 0;
}

//O la�o while possui apenas a condi��o de continua��o.
//A condi��o � avaliada antes de cada itera��o. Se for verdadeira, o bloco de c�digo � executado. Caso contr�rio, o la�o � encerrado sem executar o bloco.
//� utilizado quando n�o se sabe antecipadamente o n�mero de itera��es ou quando a condi��o de continua��o depende de uma vari�vel externa.

//Principal diferen�a na hora do uso dos la�os:
//A escolha entre esses la�os depende das necessidades espec�ficas do problema em quest�o. O for � comumente utilizado quando se sabe o n�mero 
//exato de itera��es. O while � adequado quando a condi��o de continua��o n�o � conhecida antecipadamente. O do-while � �til quando � necess�rio 
//executar o bloco de c�digo pelo menos uma vez, mesmo que a condi��o seja falsa desde o in�cio.
