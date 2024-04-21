/*
Algoritmo Controle_Mercado

Variáveis
    nome_produto[30]: literal;
    preco_unit, taxa_desconto, desconto, valor_final: real;

Inicio
    Escreva("Digite o nome do produto: ");
    Leia(nome_produto);
    
    Escreva("Digite o preço unitário: ");
    Leia(preco_unit);
    
    Escreva("Digite a Taxa de Desconto a ser aplicada: ");
    Leia(taxa_desconto);
    
    desconto = preco_unit * (taxa_desconto / 100);
    valor_final = preco_unit - desconto;
    
    Escreva("================== Cupom Fiscal ==================");
    Escreva("Produto: ", nome_produto);
    Escreva("Preço: ", preco_unit);
    Escreva("Taxa de Desconto: (%)", taxa_desconto);
    Escreva("==================================================");
    
    Escreva("Desconto: ", desconto);
    Escreva("Valor do Produto com Desconto: ", valor_final);
Fim.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    char nome[30];
    int sexo;
    float altura, peso, peso_ideal, resultado;
    
    printf("Digite o seu nome: ");
    gets(nome);
    
    printf("\nOlá %s! Qual o seu sexo?\n(1 -> masculino || 2 -> feminino): ", nome);
    scanf("%d", &sexo);
    
    printf("\nQual a sua altura? ");
    scanf("%f", &altura);
    
    printf("\nQual o seu peso? ");
    scanf("%f", &peso);
    
    if(sexo == 1){
        peso_ideal = (72 * altura) - 57;
    }
    
    else{
        peso_ideal = (62.1 * altura) - 44.7;
    }
    
    printf("\n======================= Cálculo do Peso Ideal =======================");
    printf("\nNome: %s", nome);
    printf("\nAltura: %.2f", altura);
    printf("\nSexo: %d", sexo);
    printf("\n=====================================================================");
    
    printf("\n\nSeu peso ideal é: %.2fkg", peso_ideal);
    
    if(peso_ideal < peso){
        printf("\nSeu peso está acima do ideal!!!");
    }
    
    if(peso_ideal > peso){
        printf("\nSeu peso está abaixo do ideal!!!");
    }
    
    else{
        printf("\nVocê está com o peso ideal! Incrível!!!");
    }
}