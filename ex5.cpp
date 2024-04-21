#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Portuguese");
    int num, qtdPar = 0, qtdImpar = 0;
    float mediaPar = 0, mediaImpar = 0;

    printf("Exercício 5 - impar e par");

    do
    {
        printf("\nDigite um número natural: ");
        scanf("%i", &num);

        if (num == 0)
            break;

        if (num % 2 == 0)
        {
            qtdPar++;
            mediaPar += num;
        }
        else
        {
            qtdImpar++;
            mediaImpar += num;
        }
    } while (num);

    mediaPar /= float(qtdPar);
    mediaImpar /= float(qtdImpar);

    printf("\n\nQuantidade de números pares: %i", qtdPar);
    printf("\nQuantidade de números ímpares: %i", qtdImpar);
    printf("\nMédia de números pares: %.2f", mediaPar);
    printf("\nMédia de números ímpares: %.2f", mediaImpar);

    return 0;
}

/*5. Escreva um programa que leia uma quantidade não determinada de números
positivos. Quando o usuário digitar zero, a leitura encerrará e deverá exibir:
a. Quantidade de números pares
b. Quantidade números ímpares
c. Média dos números pares
d. Média dos números ímpares
*/