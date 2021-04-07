#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);
    if (n % 2 == 0){
        printf("%d é par! \n", n);
    } else {
        printf("%d é ímpar! \n", n);
    }
    system("pause");
}
