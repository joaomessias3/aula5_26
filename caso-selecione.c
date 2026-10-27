#include <stdio.h>

int main()
{
    int x;
    const char *canal;

    printf("Digite o numero do canal de tv : ");
    scanf("%d", &x);

    switch (x)
    {        // A variável a ser avaliada
    case 22: // Se o valor for 1
        canal = "globo";
        break; // Interrompe a execução do switch
    case 33:   // Se o valor for 2
        canal = "Sbt";
        break;
    case 44:
        canal = "Band";
        break;
    
        break;
    default: // Equivalente ao "outrocaso", se nenhum caso corresponder
        canal = "Valor invalido";
        break;
    }

    printf("O canal selecionado foi : %s\n", canal);

    return 0;
}