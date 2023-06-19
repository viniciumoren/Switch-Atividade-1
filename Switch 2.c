#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int operacao;
    float numero1, numero2;
    float resultado;
    int resposta;

    setlocale(LC_ALL, "Portuguese");

    do
    {

        system("cls");

        printf("Calculadora\n\n");
        printf("Digite um numero:");
        scanf("%f", &numero1);

        fflush(stdin);

        system("cls");

        printf("Codigos \n 1 - Soma  \n 2 - Substração \n 3 - Multiplicação \n 4 - Divisão \n");
        printf("Digite a operação:");
        scanf("%d", &operacao);

        fflush(stdin);

        system("cls");

        printf("Calculadora:\n\n");
        printf("Digite um numero:");
        scanf("%f", &numero2);

        fflush(stdin);

        system("cls");

        switch (operacao)
        {

        case 1:
            resultado = numero1 + numero2;
            break;

        case 2:
            resultado = numero1 - numero2;
            break;

        case 3:
            resultado = numero1 * numero2;
            break;

        case 4:
            resultado = numero1 / numero2;
            break;
        }

        printf("\nResultado: %.1f\n\n", resultado);

        printf("1 para reiniciar \n0 para sair do programa \n\nDigite:\n");
        scanf("%d", &resposta);

        fflush(stdin);

    } while (resposta != 0);

    system("pause");
    return 0;
}