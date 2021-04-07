#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    float a, b, c, delta, r1, r2;
    printf("Informe o valor do a: ");
    scanf("%f", &a);
    printf("Informe o valor do b: ");
    scanf("%f", &b);
    printf("Informe o valor do c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    if(delta > 0){
        r1 = (-b + sqrt(delta)) / (2 * a);
        r2 = (-b - sqrt(delta)) / (2 * a);

        printf("Valor de delta: %.1f \n", delta);
        printf("Raiz 1 = %.1f \n", r1);
        printf("Raiz 2 = %.1f \n", r2);

}   else{
    printf("Não é possível realizar a equação, não existe raíz possível.\n");
    system("pause");
}
    system("pause");
    }
