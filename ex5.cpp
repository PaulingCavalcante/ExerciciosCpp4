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
        printf("Exercício 4 - média dos alunos");

        printf("\nDigite o código numérico do aluno: ");
        scanf("%i", &cod);

        for (int i = 0; i < qtd; i++)
        {
            printf("\nDigite a nota %i: ", i + 1);
            scanf("%f", &nota[i]);

            if (nota[i] < 0 || nota[i] > 10)
            {
                printf("\nInválido! A nota de ser entre 0 e 10\n");
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

        printf("\nA média do aluno %i foi de: %.2f", cod, media);

        printf(media >= 5 ? "\nO aluno foi aprovado!" : "\nO aluno foi reprovado!");

        printf("\n\nDeseja fazer calcular a média de outro aluno? (S/N): ");
        scanf(" %c", &continuar);

        if (continuar != 's' && continuar != 'S')
            break;
        else
            system("cls");
    }
    return 0;
}

/*4- Escreva um programa que leia o código de um aluno e as suas três notas.
Calcule a média ponderada do aluno, considerando que o peso para a maior
nota seja 4 e para as duas restantes 3. Mostre o código do aluno, suas três
notas, a média calculada e uma mensagem ?Aprovado? se a média for maior ou
igual a 5 e ?Reprovado? se a média for menor que 5. Ao final, o algoritmo deve
perguntar ao usuário se ele deseja calcular uma nova média.
*/