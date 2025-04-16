#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Função para inicializar o tabuleiro com 0 (água)
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

// Função para verificar se o navio cabe no tabuleiro
int podePosicionarNavio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int horizontal) {
    if (horizontal) {
        if (coluna + TAMANHO_NAVIO > TAMANHO_TABULEIRO) return 0; // fora dos limites
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha][coluna + i] != 0) return 0; // sobreposição
        }
    } else {
        if (linha + TAMANHO_NAVIO > TAMANHO_TABULEIRO) return 0;
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha + i][coluna] != 0) return 0;
        }
    }
    return 1;
}

// Função para posicionar o navio no tabuleiro
void posicionarNavio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int horizontal) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (horizontal) {
            tabuleiro[linha][coluna + i] = 3; // 3 representa navio
        } else {
            tabuleiro[linha + i][coluna] = 3;
        }
    }
}

// Função para exibir o tabuleiro no terminal
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("\n🌊 Tabuleiro Batalha Naval 🌊\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    inicializarTabuleiro(tabuleiro);

    // Coordenadas definidas direto no código (como solicitado)
    int linhaHorizontal = 2, colunaHorizontal = 4;
    int linhaVertical = 5, colunaVertical = 6;

    // Verifica e posiciona navio horizontal
    if (podePosicionarNavio(tabuleiro, linhaHorizontal, colunaHorizontal, 1)) {
        posicionarNavio(tabuleiro, linhaHorizontal, colunaHorizontal, 1);
    } else {
        printf("Erro ao posicionar navio horizontal. 🚫\n");
    }

    // Verifica e posiciona navio vertical
    if (podePosicionarNavio(tabuleiro, linhaVertical, colunaVertical, 0)) {
        posicionarNavio(tabuleiro, linhaVertical, colunaVertical, 0);
    } else {
        printf("Erro ao posicionar navio vertical. 🚫\n");
    }

    exibirTabuleiro(tabuleiro);

    return 0;
}
