#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Portuguese");
    int cod, qtd = 3;
    float nota[qtd], maior, media;
    char continuar;

    while (1)
    {
        printf("Exerc�cio 4 - m�dia dos alunos");

        printf("\nDigite o c�digo num�rico do aluno: ");
        scanf("%i", &cod);

        for (int i = 0; i < qtd; i++)
        {
            printf("\nDigite a nota %i: ", i + 1);
            scanf("%f", &nota[i]);

            if (nota[i] < 0 || nota[i] > 10)
            {
                printf("\nInv�lido! A nota de ser entre 0 e 10\n");
                i--;
            }
        }
        maior = nota[0];

        for (int i = 0; i < qtd; i++)
        {
            if (nota[i] > maior)
                maior = nota[i];
        }

        int teste = 1;

        for (int i = 0; i < qtd; i++)
        {
            if (maior == nota[i] && teste)
            {
                nota[i] *= 4;
                teste = 0;
            }
            else
            {
                nota[i] *= 3;
            }
            media += nota[i];
        }

        media /= 10;

        printf("\nA m�dia do aluno %i foi de: %.2f", cod, media);

        if (media >= 5)
            printf("\nO aluno foi aprovado!");
        else
            printf("\nO aluno foi reprovado!");

        printf("\n\nDeseja fazer calcular a m�dia de outro aluno? (S/N): ");
        scanf(" %c", &continuar);

        if (continuar != 's' && continuar != 'S')
            break;
        else
            system("cls");
    }
    return 0;
}

/*4- Escreva um programa que leia o c�digo de um aluno e as suas tr�s notas.
Calcule a m�dia ponderada do aluno, considerando que o peso para a maior
nota seja 4 e para as duas restantes 3. Mostre o c�digo do aluno, suas tr�s
notas, a m�dia calculada e uma mensagem ?Aprovado? se a m�dia for maior ou
igual a 5 e ?Reprovado? se a m�dia for menor que 5. Ao final, o algoritmo deve
perguntar ao usu�rio se ele deseja calcular uma nova m�dia.
*/