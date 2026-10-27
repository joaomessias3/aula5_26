#include <stdio.h>

int main() {
 //int segundo; 
    // Contagem regressiva

    printf("Jogo para desarmar uma bomba em 10 segundos.\n");
    for (int i = 10; i >= 1; i--) {
        printf("Valor de i: %d\n", i);
    }

    return 0;
}