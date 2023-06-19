#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    system("cls");

    setlocale(LC_ALL, "Portuguese");

    int opcao;

    do
    {
        printf("Saiba qual dia da semana é um dia util.\n");
        printf("1 - Domingo;\n2 - Segunda;\n3 - Terça;\n4 - Quarta;\n5 - Quinta;\n6 - Sexta;\n7 - Sabado;\n0 - Sair\n\n");
        printf("Informe a opção desejada: ");
        scanf("%d", &opcao);

        printf("\n");

        system("cls");

        switch (opcao)
        {
        case 1:
            printf("Domingo não é dia util!");
            break;
        case 2:
            printf("Segunda é dia util!");
            break;
        case 3:
            printf("Terça é dia util!");
            break;
        case 4:
            printf("Quarta é dia util!");
            break;
        case 5:
            printf("Quinta é dia util!");
            break;

        case 6:
            printf("Sexta é dia util!");
            break;

        case 7:
            printf("Sábado não é dia util");
            break;

        case 0:
            printf("Saindo do programa... \n");
            break;

        default:
            printf("OPÇÃO INCORRETA\n");
            break;
        }

        sleep(3);
        system("cls");
        fflush(stdin);
    } while (opcao != 0);

    system("pause");
    return 0;
}
