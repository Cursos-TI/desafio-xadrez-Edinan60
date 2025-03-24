#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Torre moveu-se para Direita.\n");
        moverTorre(casas - 1);  // Chamada recursiva
    }
}

// Função com loops aninhados para mover o Bispo
void moverBispoComLoops() {
    int movimentosBispo = 5;  // Número de movimentos do bispo
    for (int i = 0; i < movimentosBispo; i++) {  // Loop externo: movimento vertical
        for (int j = 0; j < 1; j++) {  // Loop interno: movimento horizontal
            printf("Bispo moveu-se para Cima.\n");
            printf("Bispo moveu-se para Direita.\n");
        }
    }
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Rainha moveu-se para Esquerda.\n");
        moverRainha(casas - 1);  // Chamada recursiva
    }
}

// Função com loops complexos para mover o Cavalo (apenas 1 movimento)
void moverCavalo() {
    int movimentosCima = 0;
    while (movimentosCima < 2) {  // Duas casas para cima
        printf("Cavalo moveu-se para Cima.\n");
        movimentosCima++;
    }
    printf("Cavalo moveu-se para Direita.\n");  // Uma casa para a direita
}

int main() {
    // Movimento da Torre (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(5);  // Move a torre 5 vezes

    // Movimento do Bispo (loops aninhados)
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops();  // Move o bispo usando loops aninhados

    // Movimento da Rainha (recursivo)
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);  // Move a rainha 8 vezes

    // Movimento do Cavalo (loops complexos, apenas 1 movimento)
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();  // Move o cavalo apenas 1 vez

    return 0;
}