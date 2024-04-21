/*
Algoritmo Calculo_Area_Triangulo;

Variáveis
    Base, Altura, Área: real;

Início
    Escreva("Digite a base do Triângulo: ");
    Leia(base);
    
    Escreva("Digite a altura do Triângulo: ");
    Leia(altura);
    
    Área = (Base * Altura) / 2;
    
    Escreva("============== Calculadora ==============");
    Escreva("A área é: ", area);
    Escreva("=========================================");
Fim.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    float base, altura, area;
    
    printf("Digite a base do Triângulo (m): ");
    scanf("%f", &base);
    
    printf("Digite a altura do Triângulo (m): ");
    scanf("%f", &altura);
    
    area = (base * altura) / 2;
    
    printf("============== Calculadora ==============\n");
    printf("A área em metros é: %.2f", area);
    printf("\n=========================================");
}