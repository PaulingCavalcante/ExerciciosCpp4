#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Portuguese");
    int num, qtdPar = 0, qtdImpar = 0;
    float mediaPar = 0, mediaImpar = 0;

    printf("Exerc�cio 5 - impar e par");

    do
    {
        printf("\nDigite um n�mero natural: ");
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

    printf("\n\nQuantidade de n�meros pares: %i", qtdPar);
    printf("\nQuantidade de n�meros �mpares: %i", qtdImpar);
    printf("\nM�dia de n�meros pares: %.2f", mediaPar);
    printf("\nM�dia de n�meros �mpares: %.2f", mediaImpar);

    return 0;
}

/*5. Escreva um programa que leia uma quantidade n�o determinada de n�meros
positivos. Quando o usu�rio digitar zero, a leitura encerrar� e dever� exibir:
a. Quantidade de n�meros pares
b. Quantidade n�meros �mpares
c. M�dia dos n�meros pares
d. M�dia dos n�meros �mpares
*/