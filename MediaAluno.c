#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

void main ()
{
    setlocale(LC_ALL, "");
    float n1, n2, n3, n4, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;

    if (media >= 6){
        printf("Sua m�dia foi %.2f e voc� est� aprovado! \n", media);
    } else if (media < 6 && media >= 3){
        printf("Sua m�dia foi %.2f e voc� est� em recupera��o! \n", media);
    } else {
        printf("Sua m�dia foi %.2f e voc� foi reprovado! \n", media);
    }
}
