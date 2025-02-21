#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // Chama a função recursivamente
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1); // Chama a função recursivamente
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chama a função recursivamente
}

// Função para o movimento do Cavalo com loops aninhados e condições
void moverCavalo() {
    // O Cavalo se move duas casas para cima e uma para a direita
    for (int i = 0; i < 2; i++) { // Loop externo: Movimento vertical (para cima)
        printf("Cima\n");
    }
    
    for (int j = 0; j < 1; j++) { // Loop interno: Movimento horizontal (para a direita)
        printf("Direita\n");
    }
}

int main() {
    // Definindo o número de casas que cada peça vai se mover
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;
    
    // Movimentação da Torre (recursiva)
    printf("Movimento da Torre:\n");
    moverTorre(movimentoTorre);
    
    // Movimentação do Bispo (recursiva)
    printf("\nMovimento do Bispo:\n");
    moverBispo(movimentoBispo);
    
    // Movimentação da Rainha (recursiva)
    printf("\nMovimento da Rainha:\n");
    moverRainha(movimentoRainha);
    
    // Movimentação do Cavalo (com loops aninhados)
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();
    
    return 0;
}
