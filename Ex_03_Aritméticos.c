#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float p, a, IMC;
    printf("Digite o seu peso (kg): ");
    scanf("%f", &p);
    printf("Digite a sua altura (m): ");
    scanf("%f", &a);

    IMC = p / pow (a, 2);
    printf("O seu IMC = %.2f \n", IMC);
    system("pause");
}
