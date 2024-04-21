/*

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, raiz1, raiz2;
    
    printf("Digite o valor de (A): ");
    scanf("%f", &a);
    
    printf("Digite o valor de (B): ");
    scanf("%f", &b);
    
    printf("Digite o valor de (C): ");
    scanf("%f", &c);
    
    delta = (pow(b, 2)) - (4 * a * c);
    
    if(delta < 0){
        printf("Delta: %.2f", delta);
        printf("\nNão existe raízes reias!");
    }
    
    else{
    raiz1 = (-b + sqrt(delta)) / (2 * a);
    
    raiz2 = (-b - sqrt(delta)) / (2 * a);
    
    printf("\nDelta: %.2f", delta);
    printf("\nRaiz 1: %.2f", raiz1);
    printf("\nRaiz 2: %.2f", raiz2);
    }
}