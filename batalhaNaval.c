#include <stdio.h>

#define TAM 10
#define NAVIO 3

// Função para imprimir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\n🌊 Tabuleiro Batalha Naval 🌊\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona navio horizontal (linha 2, coluna 3 até 5)
    int linhaH = 2, colunaH = 3;
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    // Posiciona navio vertical (linha 5 até 7, coluna 6)
    int linhaV = 5, colunaV = 6;
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    // Posiciona navio diagonal principal (3 posições: [0][0], [1][1], [2][2])
    int linhaD1 = 0, colunaD1 = 0;
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
    }

    // Posiciona navio diagonal secundária (3 posições: [0][9], [1][8], [2][7])
    int linhaD2 = 0, colunaD2 = 9;
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
    }

    // Exibe o tabuleiro completo
    exibirTabuleiro(tabuleiro);

    return 0;
}
