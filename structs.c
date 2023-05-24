#include <stdio.h>

// Definindo a estrutura "Pessoa"
struct Pessoa {
    char nome[20];
    int idade;
};

int main() {
    // Criando uma variável do tipo "Pessoa"
    struct Pessoa pessoa1;

    // Atribuindo valores aos membros da struct
    strcpy(pessoa1.nome, "Jorge");
    pessoa1.idade = 25;

    // Imprimindo os dados da pessoa
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);

    return 0;
}

