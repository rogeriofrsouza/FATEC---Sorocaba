#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    float d, l, c;
    printf("Informe a dist�ncia percorrida (km): ");
    scanf("%f", &d);
    printf("Informe a quantidade de combust�vel gasto (litros): ");
    scanf("%f", &l);

    c = d / l;
    printf("O consumo m�dio do ve�culo �: %.2f km/l \n", c);
    system("pause");
}
