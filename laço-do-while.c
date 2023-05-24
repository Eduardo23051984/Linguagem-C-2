// C�digo que repetir� 20 vezes o nome "Unipac". No fim do c�digo o coment�rio sobre o la�o "do-while".

#include <stdio.h>

int main() {
    int contador = 0; // Vari�vel de controle do la�o

    // La�o do-while para repetir 20 vezes
    do {
        printf("Unipac\n");
        contador++;
    } while (contador < 20);

    return 0;
}

//O la�o do-while possui a condi��o de continua��o no final, ap�s o bloco de c�digo.
//O bloco de c�digo � executado pelo menos uma vez, independentemente da condi��o ser verdadeira ou falsa.
//Ap�s a execu��o do bloco, a condi��o � avaliada. Se for verdadeira, o la�o continua. Caso contr�rio, o la�o � encerrado.
//� utilizado quando � necess�rio garantir que o bloco de c�digo seja executado pelo menos uma vez, independentemente da condi��o.

//Principal diferen�a na hora do uso dos la�os:
//A escolha entre esses la�os depende das necessidades espec�ficas do problema em quest�o. O for � comumente utilizado quando se sabe o n�mero 
//exato de itera��es. O while � adequado quando a condi��o de continua��o n�o � conhecida antecipadamente. O do-while � �til quando � necess�rio 
//executar o bloco de c�digo pelo menos uma vez, mesmo que a condi��o seja falsa desde o in�cio.
