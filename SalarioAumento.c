#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    float salario, resultado;

    printf("Digite o salário: R$");
    scanf("%f", &salario);        //  "Verdadeiro"                    "Falso"
    resultado = salario >= 1000 ? salario + (salario * 0.10) : salario + (salario * 0.05);
    printf("O novo salário = R$%.2f \n", resultado);
}
