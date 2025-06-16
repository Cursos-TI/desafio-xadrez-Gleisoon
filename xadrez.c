#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça vai se mover
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    // TORRE - Utilizando estrutura FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    // BISPO - Utilizando estrutura WHILE
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < casas_bispo) {
        printf("Cima Direita\n");
        i++;
    }

    // RAINHA - Utilizando estrutura DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casas_rainha);

    return 0;
}
