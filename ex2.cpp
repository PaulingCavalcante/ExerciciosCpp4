#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Portuguese");

    return 0;
}

/*2. Escreva um programa que efetue a entrada de um valor numérico inteiro
qualquer, em seguida calcule o valor multiplicando por 3 e apresente o
resultado. Ao final da apresentação do resultado o algoritmo deve perguntar ao
usuário se ele deseja novo cálculo.
Exemplo de uso:
Digite um valor: 4
O resultado da multiplicação por 3 é 12.
Deseja realizar mais um cálculo (s/n)? s
Digite um valor: 6
O resultado da multiplicação por 3 é 18.
Deseja realizar mais um cálculo (s/n)? n
Fim do programa.*/