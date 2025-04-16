#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define NAVIO 3
#define AREA_AFETADA 5
#define AGUA 0

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("\n🌊 Tabuleiro Batalha Naval 🌊\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para aplicar a área de efeito de uma habilidade (cone, cruz ou octaedro)
void aplicarHabilidade(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int habilidade[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int origemX, int origemY) {
    int limite = 5; // Define o limite da habilidade (considerando uma matriz de 5x5 para efeito)

    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            // Se a habilidade afeta essa posição e não ultrapassa os limites do tabuleiro
            if (i >= origemX - limite && i <= origemX + limite && j >= origemY - limite && j <= origemY + limite) {
                if (habilidade[i - origemX + limite][j - origemY + limite] == 1) {
                    tabuleiro[i][j] = AREA_AFETADA; // Marca a área afetada pela habilidade
                }
            }
        }
    }
}

// Função para definir a matriz de habilidade do cone
void criarHabilidadeCone(int habilidade[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    int tamanho = 5;
    // Inicializa a matriz com zeros (nenhuma área afetada)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            habilidade[i][j] = 0;
        }
    }
    // Define a área afetada do cone (expansão do topo para a base)
    for (int i = 0; i < tamanho; i++) {
        for (int j = i; j < tamanho - i; j++) {
            habilidade[i][j] = 1;
        }
    }
}

// Função para definir a matriz de habilidade da cruz
void criarHabilidadeCruz(int habilidade[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    int tamanho = 5;
    // Inicializa a matriz com zeros (nenhuma área afetada)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            habilidade[i][j] = 0;
        }
    }
    // Define a área afetada da cruz (vertical e horizontal)
    for (int i = 0; i < tamanho; i++) {
        habilidade[tamanho / 2][i] = 1;
        habilidade[i][tamanho / 2] = 1;
    }
}

// Função para definir a matriz de habilidade do octaedro
void criarHabilidadeOctaedro(int habilidade[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    int tamanho = 5;
    // Inicializa a matriz com zeros (nenhuma área afetada)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            habilidade[i][j] = 0;
        }
    }
    // Define a área afetada do octaedro (formato de losango)
    habilidade[2][2] = 1;
    habilidade[1][3] = 1;
    habilidade[3][3] = 1;
    habilidade[0][4] = 1;
    habilidade[4][4] = 1;
    habilidade[1][1] = 1;
    habilidade[3][1] = 1;
    habilidade[2][0] = 1;
    habilidade[4][0] = 1;
}

int main() {
    // Inicialização do tabuleiro 10x10
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    int habilidadeCone[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int habilidadeCruz[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int habilidadeOctaedro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Definir navios no tabuleiro
    tabuleiro[2][3] = NAVIO;
    tabuleiro[2][4] = NAVIO;
    tabuleiro[2][5] = NAVIO;

    // Criar as matrizes das habilidades
    criarHabilidadeCone(habilidadeCone);
    criarHabilidadeCruz(habilidadeCruz);
    criarHabilidadeOctaedro(habilidadeOctaedro);

    // Aplicar habilidades no tabuleiro (defina os pontos de origem)
    aplicarHabilidade(tabuleiro, habilidadeCone, 3, 3);  // Habilidade Cone no ponto (3,3)
    aplicarHabilidade(tabuleiro, habilidadeCruz, 5, 5);  // Habilidade Cruz no ponto (5,5)
    aplicarHabilidade(tabuleiro, habilidadeOctaedro, 7, 7);  // Habilidade Octaedro no ponto (7,7)

    // Exibir o tabuleiro com as áreas afetadas pelas habilidades
    exibirTabuleiro(tabuleiro);

    return 0;
}
