/*
    Algoritmo_Tabelas_Multiplicação;

    Variáveis
        n, num, multiplicador, resultado: Inteiro;
    
    Inicio
        Escreva("=============+ Tabela de Multiplicação +=============");
    
        Escreva("Qual o número desejado? ");
        Leia(num);
        
        Escreva("Até qual número? ");
        Leia(multiplicador);

        Escreva("=============+=========================+=============");
        
        Para n = 0 Até n <= multiplicador Faça
        Inicio
            resultado = num * n;
            n++;
            
            Escreva("num x n = resultado", num, n, resultado);
        Fim;
        
        Escreva("=============+=========================+=============");
    Fim.
*/

#include <stdio.h>

int main()
{
    int n, num, multiplicador, resultado;
    
    printf("=============+ Tabela de Multiplicação +=============");
    
    printf("\nQual o número desejado? ");
    scanf("%d", &num);
    
    printf("Até qual número? ");
    scanf("%d", &multiplicador);

    printf("\n\n=============+=========================+=============\n");
    
    for(n = 0; n <= multiplicador; n++){
        resultado = num * n;
        
        printf("%d x %d = %d\n", num, n, resultado);
    }
    
    printf("\n=============+=========================+=============");
}