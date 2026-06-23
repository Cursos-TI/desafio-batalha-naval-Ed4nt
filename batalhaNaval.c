#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[10][10];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[10][10] = {0};

    int tamanhoNavio = 3;
    int valorNavio = 3;

    // POSICIONAMENTO NAVIO 1 (HORIZONTAL)
    // linha 2 colunas 3, 4 e 5
    int linhaNavio1 = 2;
    int colunaInicialNavio1 = 3;

    for (int k = 0; k < tamanhoNavio; k++) {
        tabuleiro[linhaNavio1][colunaInicialNavio1 + k] = valorNavio;
    }

    // POSICIONAMENTO NAVIO 2 (VERTICAL)
    // COLUNA 7 LINHAS 5, 6 e 7
    
    int linhaInicialNavio2 = 5;
    int colunaNavio2 = 7;
    for(int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaInicialNavio2 + i][colunaNavio2] = valorNavio;
    }

    printf("Coordenadas do Navio 1:\n");
    for (int j = 0; j < tamanhoNavio; j++) {
        printf("Parte %d: Linha %d, Coluna %d\n", j + 1, linhaNavio1, colunaInicialNavio1 + j);
    }

    printf("Coordenadas do Navio 2:\n");
    for (int j = 0; j < tamanhoNavio; j++) {
        printf("Parte %d: Linha %d, Coluna %d\n", j + 1, linhaInicialNavio2 + j, colunaNavio2);
    }

    printf("\n  TABULEIRO 10X10 \n");
    for (int i = 0; i < 10; i++) {
       for (int j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);
       }
       printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}