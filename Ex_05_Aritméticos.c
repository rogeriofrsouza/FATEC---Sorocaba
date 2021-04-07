#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL, "");
    char nome[50];
    float s_inicial, vendas, s_acrescido;

    printf("Informe o nome do vendedor: ");
    gets(nome);
    printf("Informe o salário mínimo: R$ ");
    scanf("%f", &s_inicial);
    printf("Informe o valor total das vendas efetuadas no mês: ");
    scanf("%f", &vendas);

    s_acrescido = s_inicial + (vendas * 0.15);
    printf("O(a) vendedor(a) %s recebeu no final do mês o salário = R$ %.2f \n", nome, s_acrescido);
    system("pause");
}
