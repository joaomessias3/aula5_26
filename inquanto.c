#include <stdio.h>

int main() {
    int x, soma = 0;

    printf("//Jogo de adivinhação de numeros \n")
    printf("//Acerte o número para sai e receber seu prêmio\n")

    printf("Digite um numero: ");
    scanf("%d", &x);

    while (x != 26) {
        soma = soma + x;
        printf("Você errou! Digite outro número:");
        scanf("%d", &x);
    }
       printf("Você acertou irá receber R$ = %d\n:", soma );
   // printf("SOMA = %d\n", soma);

    return 0;
}