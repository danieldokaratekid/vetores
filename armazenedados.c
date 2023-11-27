#include<stdio.h>
int main(){
struct dados_pessoais{
int cpfdofuncionario;
char nomedofuncionario[200];
int idadedofuncionario;
int idadedocliente;
char nomedocliente[200];
int cpfdocliente;
};
struct dados_pessoais dados;
printf("Insira o nome do funcionario:\n");
gets(dados.nomedofuncionario);
printf("Digite a idade do funcionario:\n");
scanf("%d",&dados.idadedofuncionario);
printf("Digite o cpf do funcionario:\n");
scanf("%d",&dados.cpfdofuncionario);
printf("Digite o nome do cliente:\n");
scanf("%s",&dados.nomedocliente);
printf("Digite o cpf do cliente:\n");
scanf("%d",&dados.cpfdocliente);
printf("Digite a idade do cliente:\n");
scanf("%d",&dados.idadedocliente);

printf("\nExibindo Informacoes\n");

printf("nomedofuncionario:%s\n",dados.nomedofuncionario);
printf("cpfdofuncionario:%d\n",dados.cpfdofuncionario);
printf("idadedofuncionario:%d\n",dados.idadedofuncionario);
printf("idadedocliente:%d\n",dados.idadedocliente);
printf("cpfdocliente:%d\n",dados.cpfdocliente);
printf("nomedocliente:%s\n",dados.nomedocliente);
return 0;
}