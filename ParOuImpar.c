#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int n;

    printf("Digite um n�mero: ");
    scanf("%d", &n);
    if (n % 2 == 0){
        printf("%d � par! \n", n);
    } else {
        printf("%d � �mpar! \n", n);
    }
    system("pause");
}
