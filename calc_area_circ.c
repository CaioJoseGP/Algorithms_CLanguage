#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    float pi = 3.14, area, r;

    printf("Digite o valor do raio: ");
    scanf("%f", &r);

    area = pi * (pow(r, 2));

    printf("\nO valor da área é: %.2f\n\n", area, setlocale(LC_ALL,""));
}

