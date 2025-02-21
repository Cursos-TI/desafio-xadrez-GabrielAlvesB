#include <stdio.h>

int main() {
    // Definindo o número de casas que cada peça vai se mover
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;
    
    // Movimentação da Torre
    // A Torre se move 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo
    // O Bispo se move 5 casas na diagonal (Cima e Direita)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimentação da Rainha
    // A Rainha se move 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentoRainha);

    // Movimentação do Cavalo
    // O Cavalo se move duas casas para baixo e uma casa para a esquerda
    printf("\nMovimento do Cavalo:\n");
    
    for (int k = 0; k < 2; k++) {
        // Primeiro movimento: Cavalo se move uma casa para baixo
        printf("Baixo\n");
    }

    // Segundo movimento: Cavalo se move uma casa para a esquerda
    printf("Esquerda\n");

    return 0;
}
