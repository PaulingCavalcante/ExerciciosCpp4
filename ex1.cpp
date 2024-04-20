#include <iostream>
#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
    setlocale(LC_ALL,"Portuguese");
    float salAtual, salInicial;

    printf("Exercício 1 - Calcular aumento\n");

    printf("Digite seu salário: ");
    scanf("%f", &salInicial);

    if (salInicial <= 800)
        salAtual = salInicial * 1.1;
    if (salInicial > 800 && salInicial <= 1000)
        salAtual = salInicial * 1.09;
    if (salInicial > 1000)
        salAtual = salInicial * 1.07;
    
    printf("O salário com o aumento do funcionário é de: %.2f", salAtual);

    return 0;
}

/*Escreva um programa que receba o salário de um funcionário e, usando a
tabela a seguir calcule e mostre o novo salário:
Faixa Salarial % de aumento
Até R$800,00 10%
R$800,01 até R$1.000,00 9%
Acima de R$1.000,00 7%*/