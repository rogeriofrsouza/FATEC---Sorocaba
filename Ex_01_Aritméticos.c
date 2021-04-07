#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    float v, q, p;

    printf("Qual o valor do produto? R$: ");
    scanf("%f", &v);
    printf("Quantas parcelas deseja pagar? ");
    scanf("%f", &q);

    p = v / q;
    printf("O valor de cada parcela será: R$ %.2f \n", p);
    system("pause");
}
