#include <stdio.h>
#include <stdlib.h>
#include <math.h> //N�o precisa incluir essa biblioteca com opera��es b�sicas//
#include <locale.h>

void main()
{
    system("chcp 1252 > nul"); //Resolve a acentua��o na vari�vel//
    setlocale(LC_ALL, "");

    char nome[100];
    float n1, n2, n3, n4, m;

    printf("Digite o nome do aluno: ");
    gets(nome);
    printf("Digite a primeira nota: "); //Usar real com ,//
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    m = (n1 + n2 + n3 + n4) / 4;
    printf("Nome: %s \nM�dia: %.1f \n", nome, m);
    system("pause");
}
