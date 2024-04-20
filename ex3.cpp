#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Portuguese");
    int num, numNegativo;
    char continuar;

    while (1)
    {
        do
        {
            printf("Exercício 3 - Contagem regressiva");

            printf("\nDigite um núemero natural: ");
            scanf("%i", &num);

            if(num < 1) printf("\nDigite um número inteiro positivo!\n\n");

        } while (num<1);

        numNegativo = num * -1;

        for (num; num >= numNegativo; num--)
        {
           printf("%i\n", num);
        }
        
        printf("\nDeseja fazer a contagem de outro número? (S/N): ");
        scanf(" %c", &continuar);

        if (continuar != 's' && continuar != 'S')
            break;
        else
            system("cls");
    }

    return 0;
}

/*3. Escreva um programa que receba um valor n positivo e escreva uma contagem
regressiva do valor até ?n. Seu programa só deve aceitar valores positivos.
Exemplo de uso:
Entre com um valor positivo: 5
5 4 3 2 1 0 -1 -2 -3 -4 -5*/
