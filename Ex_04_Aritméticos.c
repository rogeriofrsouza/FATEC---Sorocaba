#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    float d, l, c;
    printf("Informe a distância percorrida (km): ");
    scanf("%f", &d);
    printf("Informe a quantidade de combustível gasto (litros): ");
    scanf("%f", &l);

    c = d / l;
    printf("O consumo médio do veículo é: %.2f km/l \n", c);
    system("pause");
}
