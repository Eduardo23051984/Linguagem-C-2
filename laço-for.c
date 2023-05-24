// C�digo que repetir� 20 vezes o nome "Unipac". No fim do c�digo o coment�rio sobre o la�o "for".

#include <stdio.h>

int main() {
    int i; // Vari�vel de controle do la�o

    // La�o for para repetir 20 vezes
    for (i = 0; i < 20; i++) {
        printf("Unipac\n");
    }

    return 0;
}

//O la�o for � composto por tr�s partes: inicializa��o, condi��o de continua��o e express�o de incremento/decremento.
//A inicializa��o � executada apenas uma vez no in�cio do la�o.
//A condi��o de continua��o � avaliada a cada itera��o. Se for verdadeira, o bloco de c�digo � executado. Caso contr�rio, o la�o � encerrado.
//A express�o de incremento/decremento � executada ap�s cada itera��o.
//� geralmente utilizado quando o n�mero de itera��es � conhecido antecipadamente.

//Principal diferen�a na hora do uso dos la�os:
//A escolha entre esses la�os depende das necessidades espec�ficas do problema em quest�o. O for � comumente utilizado quando se sabe o n�mero 
//exato de itera��es. O while � adequado quando a condi��o de continua��o n�o � conhecida antecipadamente. O do-while � �til quando � necess�rio 
//executar o bloco de c�digo pelo menos uma vez, mesmo que a condi��o seja falsa desde o in�cio.
