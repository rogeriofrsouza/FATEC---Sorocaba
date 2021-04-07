#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    int n1, n2, r1, r2, r3;
    setlocale(LC_ALL, "");

    printf("Digite um número inteiro: ");
    scanf("%d", &n1);
    printf("Digite outro número inteiro: ");
    scanf("%d", &n2);
    r1 = (n1 > n2) && (n1 == n2);
    r2 = (n1 <= n2) || (n1 != n2);
    r3 = !(n1 < n2);

    printf("%d > %d e %d == %d resultado é %d \n", n1, n2, n1, n2, r1);
    printf("%d <= %d ou %d != %d resultado é %d \n", n1, n2, n1, n2, r2);
    printf("não (%d < %d) resultado é %d \n", n1, n2, r3);
    system("pause");
}
