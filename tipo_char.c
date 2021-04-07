#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    char nome[100];
    char sexo;

    printf("Digite o seu nome: ");
    gets(nome);
    printf("Qual seu sexo? Digite F para feminino ou M para masculino: ");
    scanf("%c", &sexo);
    printf("O nome digitado foi %s e sexo %c.\n", nome, sexo);
    system("pause");
}
