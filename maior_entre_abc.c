#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    int a, b, c;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    
    
    if((a + b) < c){
        printf("A + B é menor que C");
    }
    
    if((a + b) > c){
        printf("A + B é maior que C");
    }
    
    else{
        printf("A + B é igual que C");
    }
}