#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int r;

    printf("Digite um numero para o raio: ");
    scanf("%d", &r);

    const double PI = 3.14159;
    double c;

    c = 2 * PI * r;
    printf("O comprimento da circunferencia = %f \n", c);
    system("pause");
}
