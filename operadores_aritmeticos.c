#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float n1, n2, r1, r2, r3, r4, r5, r6;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);
    r1 = n1 + n2;
    printf("%.1f + %.1f = %.1f \n", n1, n2, r1);
    r2 = n1 - n2;
    printf("%.1f - %.1f = %.1f \n", n1, n2, r2);
    r3 = n1 * n2;
    printf("%.1f * %.1f = %.1f \n", n1, n2 ,r3);
    r4 = n1 / n2;
    printf("%.1f / %.1f = %.1f \n", n1, n2, r4);
    r5 = pow(n1, n2);
    printf("%.1f elevado a %.1f = %.1f \n", n1, n2, r5);
    r6 = sqrt(n1);
    printf("A raiz quadrada de %.1f = %.1f \n", n1, r6);
    system("pause");
}
