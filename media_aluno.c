#include <stdio.h>
#include <math.h>
#include <locale.h>

/*
Algoritmo Controle_de_Alunos;

Variáveis
    Aluno[30], Disciplina[25]: literal;
    Bimestre: inteiro;
    Nota 1, Nota 2, Nota 3, Média: real;

Início
    Escreva("Digite o nome do aluno: ");
    Leia(aluno);
    
    Escreva("Digite a disciplina: ");
    Leia(disciplina);
    
    Escreva("Digite o bimestre: ");
    Leia(bimestre);
    
    Escreva("Digite a nota 1: ");
    Leia(nota 1);
    
    Escreva("Digite a nota 2: ");
    Leia(nota 2);
    
    Escreva("Digite a nota 3: ");
    Leia(nota 3);
    
    Média = ((Nota 1 * 1) + (Nota 2 * 2) + (Nota 3 * 3)) / 6
    
    Escreva("============== Boletim do Aluno ==============");
    Escreva("Aluno: ", aluno);
    Escreva("Disciplina: ", disciplina);
    Escreva("Bimestre: ", bimestre);
    Escreva("Nota 1: Nota 2: Nota 3: ", nota 1, nota 2, nota 3);
    Escreva("==============================================");
    
    Escreva("A média foi: ", média);
    
Fim.
*/

int main()
{
    char aluno[30], disciplina[25];
    int bimestre;
    float nota1, nota2, nota3, media;
    
    printf("Digite o nome do aluno: ");
    gets(aluno);
    
    printf("Digite a disciplina: ");
    gets(disciplina);
    
    printf("Digite o bimestre: ");
    scanf("%d", &bimestre);
    
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    
    media = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3)) / 6;
    
    printf("\n============== Boletim do Aluno ==============\n");
    printf("Aluno: %s\n", aluno);
    printf("Disciplina: %s\n", disciplina);
    printf("Bimestre: %d\n", bimestre);
    printf("Nota 1: %.2f Nota 2: %.2f Nota 3: %.2f", nota1, nota2, nota3);
    printf("\n==============================================\n\n");
    
    printf("A média foi: %.2f", media);
}