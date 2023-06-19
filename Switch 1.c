#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{

    setlocale (LC_ALL, "Portuguese");

    int codigo;
    int resposta;
    int novoRegistro;
    float somaProduto = 0;

do
{

somaProduto = 0;

    printf("1 - Deseja digitar um codigo. \n");
    printf("0 - Sair. \n\n");

    printf("Informe a opção desejada: ");
    scanf("%d", &resposta);

    system("cls");

    do 
    {
        printf("Valor total: R$ %.2f \n\n", somaProduto);
        printf("Codigo 100 - Detergente por R$1,59. \n");
        printf("Codigo 101 - Esponja por R$4,59. \n");
        printf("Codigo 102 - Lã de aço por R$1,79. \n\n");

        printf("Digite o codigo:");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 100:
            somaProduto += 1.59;
            break;

        case 101:
            somaProduto += 4.59;
            break;

        case 102:
            somaProduto += 1.79;
            break;

        default:
            printf("Codigo invalido.");
            break;
        }

        system("cls");

        printf("Valor total: R$ %.2f \n\n", somaProduto);
        printf("1 - Deseja digitar um codigo. \n");
        printf("0 - finalizar. \n\n");

        printf("Informe a opção desejada: ");
        scanf("%d", &resposta);

        system("cls");

    } while (resposta != 0);

    printf("Valor final: R$ %.2f \n\n", somaProduto);
    printf ("Codigo 1 - Nova Compra. \nCondigo 0 - Finaliza programa.\n\n");
    scanf ("%d", &novoRegistro);

    system ("cls");

} while (novoRegistro !=0);


system ("pause");

return 0;


}