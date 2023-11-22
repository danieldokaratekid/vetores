#include <stdio.h>

int main() {
    char disciplina [200]; // Um disciplina.
    char alunos[2][200]; // 2 alunos.
    float notas[2][3]; // 3 notas para 2 alunos.
    int i, j;
    
    printf("Digite o nome da disciplina: ");
    gets(disciplina);
    
    for (i = 0; i < 2; i++) {
        printf("Digite o nome do aluno: ");
        gets(alunos[i]);
        
        for (j = 0; j < 3; j++) {
            printf("Digite uma nota: ");
            scanf("%f",&notas[i][j]);
        }
        
        //Limpa cache de input.
        //fflush(stdin); // Para VS Code e Dev C++ (Windows).
        
    }
    
    printf("\nExibindo dados da disciplina... \n");
    
    printf("Disciplina: %s \n", disciplina);
    
    for (i = 0; i < 2; i++) {
        printf("\nNome do aluno: %s \n", alunos[i]);
        
        for (j = 0; j < 3; j++) {
            printf("Nota: %.1f \n", notas[i][j]);
        }
    }

    return 0;
}
