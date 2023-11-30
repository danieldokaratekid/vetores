
#include <stdio.h>

struct dados_funcionario {
    char nome [200];
    char dataAdmissao [200];
    char matricula [200];
    char endereco [200];
};

struct dados_cliente {
    char nome [200];
    char dataNascimento [200];
    char endereco [200];
};

int main() {
    struct dados_funcionario funcionario[3];
    struct dados_cliente cliente[3];
    int i;
   
    for (i = 0; i < 3; i++) {
        printf("\nInforme os dados do %dº funcionario: \n", i + 1);
        printf("Digite o nome: ");
        gets(funcionario[i].nome);
        printf("Digite a data de admissao: ");
        gets(funcionario[i].dataAdmissao);
        printf("Digite a matricula: ");
        gets(funcionario[i].matricula);
        printf("Digite o endereco: ");
        gets(funcionario[i].endereco);
    }
   
    for (i = 0; i < 3; i++) {
        printf("\nInforme os dados do %dº cliente: \n", i + 1);
        printf("Digite o nome: ");
        gets(cliente[i].nome);
        printf("Digite a data de admissao: ");
        gets(cliente[i].dataNascimento);
        printf("Digite o endereco: ");
        gets(cliente[i].endereco);
    }

    for (i = 0; i < 3; i++) {
        printf("\nExibindo os dados do %dº funcionario: \n", i + 1);
        printf("\nNome: %s \n", funcionario[i].nome);
        printf("Data de admissao: %s \n", funcionario[i].dataAdmissao);
        printf("Matricula: %s \n", funcionario[i].matricula);
        printf("Endereco: %s \n", funcionario[i].endereco);
    }

    for (i = 0; i < 3; i++) {
        printf("\nExibindo os dados do %dº cliente: \n", i + 1);
        printf("\nNome: %s \n", cliente[i].nome);
        printf("Data de nascimento: %s \n", cliente[i].dataNascimento);
        printf("Endereco: %s \n", cliente[i].endereco);
    }
   
    return 0;
}