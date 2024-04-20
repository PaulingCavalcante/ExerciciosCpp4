#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    char continuar;

    while (1)
    {
        printf("Exercício 2 - Multiplicador por 3");
        printf("\n\nDigite um número inteiro: ");
        scanf("%i", &num);

        printf("O resultado da multiplicação de %i por 3 é: %i", num, num * 3);

        printf("\n\nDeseja calcular o aumento de outro funcion?rio? (S/N): ");
        scanf(" %c", &continuar);

        if (continuar != 's' && continuar != 'S')
            break;
        else
            system("cls");
    }

    return 0;
}

/*2. Escreva um programa que efetue a entrada de um valor num?rico inteiro
qualquer, em seguida calcule o valor multiplicando por 3 e apresente o
resultado. Ao final da apresenta??o do resultado o algoritmo deve perguntar ao
usu?rio se ele deseja novo c?lculo.
Exemplo de uso:
Digite um valor: 4
O resultado da multiplica??o por 3 ? 12.
Deseja realizar mais um c?lculo (s/n)? s
Digite um valor: 6
O resultado da multiplica??o por 3 ? 18.
Deseja realizar mais um c?lculo (s/n)? n
Fim do programa.*/