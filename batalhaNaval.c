#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[10][10];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int i;

    int tabuleiro[10][10] = {0};

    int navio1[3] = {3, 3, 3};

    int navio2[3] = {3, 3, 3};

    int h1;
    int v1;

    
    printf("Selecione uma posição horizontal de 0 a 9\n");
    scanf("%d", &h1);
    for (int k = 0; k < 3; k++) {
        printf("Selecione uma posição vertical de 0 a 9\n");
        scanf("%d", &v1);
        tabuleiro[v1][h1] = navio1[0];
    }


    for (i = 0; i < 10; i++) {
       printf("%d %d %d %d %d %d %d %d %d %d\n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2], tabuleiro[i][3], tabuleiro[i][4], tabuleiro[i][5], tabuleiro[i][6], tabuleiro[i][7], tabuleiro[i][8], tabuleiro[i][9]);
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







/*

#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios
    
    // Matriz de inteiros comum (sem o '*') inicializada com zeros (água)
    int tabuleiro[10][10] = {0}; 

    // Definindo o tamanho dos navios e o valor que os representa (ex: 3)
    int tamanho_navio = 3;
    int valor_navio = 3;

    // --- POSICIONAMENTO DO NAVIO 1 (Horizontal) ---
    // Exemplo fixa: Linha 2, ocupando as colunas 3, 4 e 5
    int linha_h = 2;
    int coluna_h_inicio = 3;
    
    for (int j = 0; j < tamanho_navio; j++) {
        tabuleiro[linha_h][coluna_h_inicio + j] = valor_navio;
    }

    // --- POSICIONAMENTO DO NAVIO 2 (Vertical) ---
    // Exemplo fixa: Ocupando as linhas 5, 6 e 7 na coluna 7
    int linha_v_inicio = 5;
    int coluna_v = 7;
    
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_v_inicio + i][coluna_v] = valor_navio;
    }

    // --- EXIBIÇÃO DAS COORDENADAS (Requisito do exercício) ---
    printf("Coordenadas do Navio Horizontal:\n");
    for (int j = 0; j < tamanho_navio; j++) {
        printf("Parte %d: Linha %d, Coluna %d\n", j + 1, linha_h, coluna_h_inicio + j);
    }

    printf("\nCoordenadas do Navio Vertical:\n");
    for (int i = 0; i < tamanho_navio; i++) {
        printf("Parte %d: Linha %d, Coluna %d\n", i + 1, linha_v_inicio + i, coluna_v);
    }

    // --- EXIBIÇÃO DO TABULEIRO ---
    printf("\n--- TABULEIRO DE BATALHA NAVAL ---\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Quebra de linha ao final de cada linha do tabuleiro
    }

    return 0;
}

*/