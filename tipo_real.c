#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    float num;

    setlocale(LC_ALL, "");
    printf("Digite um n�mero real: ");
    scanf("%f", &num);

    printf("O n�mero digitado foi %.2f \n", num);
    system("pause");
}
