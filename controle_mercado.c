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
    char nome_produto[30];
    float preco_unit, taxa_desconto, desconto, valor_final;
    
    printf("Digite o nome do produto: ");
    gets(nome_produto);
    
    printf("Digite o preço unitário: ");
    scanf("%f", &preco_unit);
    
    printf("Digite a Taxa de Desconto a ser aplicada: ");
    scanf("%f", &taxa_desconto);
    
    desconto = preco_unit * (taxa_desconto / 100);
    valor_final = preco_unit - desconto;
    
    printf("\n================== Cupom Fiscal ==================");
    printf("\nProduto: %s", nome_produto);
    printf("\nPreço: %.2f", preco_unit);
    printf("\nTaxa de Desconto: %.1f(%)", taxa_desconto);
    printf("\n==================================================");
    
    printf("\n\nDesconto: %.2f", desconto);
    printf("\nValor do Produto com Desconto: %.2f", valor_final);
}