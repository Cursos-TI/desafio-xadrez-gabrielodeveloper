#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Movimento da Torre (5 casas para a direita) usando 'for'
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita \n");
    }
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando 'while'
    printf("Movimento do Bispo: \n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita \n");
        j++;
    }
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda) usando 'do-while'
    printf("Movimento da Rainha: \n");
    int k = 0;
    do {
        printf("Esquerda \n");
        k++;
    } while (k < 8);
    
    // Movimento do Cavalo (2 casas para baixo e 1 para a esquerda) usando for aninhado
    printf("Movimento do Cavalo:\n");
    
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
        for (int j = 0; j < 1; j++) {
            if (i == 1) {
                printf("Esquerda\n");
            }
        }
    }
    
    return 0;
}
