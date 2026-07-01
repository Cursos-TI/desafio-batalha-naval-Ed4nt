#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[10][10];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int tamanhoTabuleiro = 10;
    int tabuleiro[10][10] = {0};

    int tamanhoNavio = 3;
    int valorNavio = 3;

    // POSICIONAMENTO NAVIO 1 (HORIZONTAL)
    // linha 2 colunas 3, 4 e 5
    int linhaNavio1 = 2;
    int colunaInicialNavio1 = 3;
        
    // VALIDA O POSICIONAMENTO DO NAVIO 1

    int posicionamentoValidoNv1 = 1;

    if (linhaNavio1 >= tamanhoTabuleiro ||
        linhaNavio1 < 0 ||
        colunaInicialNavio1 < 0 ||
        colunaInicialNavio1 > tamanhoTabuleiro - tamanhoNavio) {

        posicionamentoValidoNv1 = 0; // retorna 0 se o posicionamento estiver incorreto
    } else {
        // valida se o navio não está sobreposto
        for (int k = 0; k < tamanhoNavio; k++) {
            if (tabuleiro[linhaNavio1][colunaInicialNavio1 + k] != 0) {
                posicionamentoValidoNv1 = 0;
                break;
            }
        }
    }

    // Condicional para posicionar o navio ou exibir mensagem de erro
    if (posicionamentoValidoNv1) {
        for (int k = 0; k < tamanhoNavio; k++) {
            tabuleiro[linhaNavio1][colunaInicialNavio1 + k] = valorNavio;
        }

        printf("Coordenadas do Navio 1:\n");
        for (int j = 0; j < tamanhoNavio; j++) {
            printf("Parte %d: Linha %d, Coluna %d\n", j + 1, linhaNavio1, colunaInicialNavio1 + j);
        }

    } else {
        printf("O posicionamento do navio 1 é inválido\n");
    }
    
    printf("\n");
    
    
    // POSICIONAMENTO NAVIO 2 (VERTICAL)
    // COLUNA 7 LINHAS 5, 6 e 7
    
    int linhaInicialNavio2 = 5;
    int colunaNavio2 = 7;

    // VALIDA O POSICIONAMENTO DO NAVIO 2

    int posicionamentoValidoNv2 = 1;
    
    if (linhaInicialNavio2 >= tamanhoTabuleiro ||
        linhaInicialNavio2 < 0 ||
        colunaNavio2 < 0 ||
        colunaNavio2 > tamanhoTabuleiro - tamanhoNavio) {

        posicionamentoValidoNv2 = 0; // retorna 0 se o posicionamento estiver incorreto
    } else {
        // valida se o navio não está sobreposto
        for (int k = 0; k < tamanhoNavio; k++) {
            if (tabuleiro[linhaInicialNavio2 + k][colunaNavio2] != 0) {
                posicionamentoValidoNv2 = 0;
                break;
            }
        }
    }

    // POSICIONA O NAVIO 2 OU EXIBE MENSAGEM DE ERRO

    if (posicionamentoValidoNv2) {
        for(int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaInicialNavio2 + i][colunaNavio2] = valorNavio;
        }

        printf("Coordenadas do Navio 2:\n");
        for (int j = 0; j < tamanhoNavio; j++) {
            printf("Parte %d: Linha %d, Coluna %d\n", j + 1, linhaInicialNavio2 + j, colunaNavio2);
        }
    } else {
        printf("O posicionamento do navio 2 é inválido\n");
    }
    
    printf("\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // POSICIONAMENTO NAVIO 3 (DIAGONAL)
    // LINHA 0 COLUNA 9, LINHA 1 COLUNA 8, LINHA 2 COLUNA 7

    int linhaInicialNavio3 = 0;
    int colunaInicialNavio3 = 9;

    // VALIDA O POSICIONAMENTO DO NAVIO 3

    int posicionamentoValidoNv3 = 1;
    
    if (linhaInicialNavio3 >= tamanhoTabuleiro ||
        linhaInicialNavio3 < 0 ||
        colunaInicialNavio3 >= tamanhoTabuleiro ||
        colunaInicialNavio3 < tamanhoNavio - 1) {

        posicionamentoValidoNv3 = 0; // retorna 0 se o posicionamento estiver incorreto
    } else {

        // valida se o navio não está sobreposto
        for (int k = 0; k < tamanhoNavio; k++) {
            if (tabuleiro[linhaInicialNavio3 + k][colunaInicialNavio3 - k] != 0) {
                posicionamentoValidoNv3 = 0;
                break;
            }
        }
    }

    // POSICIONA O NAVIO 3 OU EXIBE MENSAGEM DE ERRO

    if (posicionamentoValidoNv3) {
        for(int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaInicialNavio3 + i][colunaInicialNavio3 - i] = valorNavio;
        }

        printf("Coordenadas do Navio 3:\n");
        for (int j = 0; j < tamanhoNavio; j++) {
            printf("Parte %d: Linha %d, Coluna %d\n", j + 1, linhaInicialNavio3 + j, colunaInicialNavio3 - j);
        }
    } else {
        printf("O posicionamento do navio 3 é inválido\n");
    }
    
    printf("\n");

    // POSICIONAMENTO NAVIO 4 (DIAGONAL)
    // LINHA 5 COLUNA 1, LINHA 6 COLUNA 2, LINHA 7 COLUNA 3

    int linhaInicialNavio4 = 5;
    int colunaInicialNavio4 = 1;

    // VALIDA O POSICIONAMENTO DO NAVIO 4

    int posicionamentoValidoNv4 = 1;
    
    if (linhaInicialNavio4 >= tamanhoTabuleiro ||
        linhaInicialNavio4 < 0 ||
        colunaInicialNavio4 < 0 ||
        colunaInicialNavio4 > tamanhoTabuleiro - tamanhoNavio) {

        posicionamentoValidoNv4 = 0; // retorna 0 se o posicionamento estiver incorreto
    } else {

        // valida se o navio não está sobreposto
        for (int k = 0; k < tamanhoNavio; k++) {
            if (tabuleiro[linhaInicialNavio4 + k][colunaInicialNavio4 + k] != 0) {
                posicionamentoValidoNv4 = 0;
                break;
            }
        }
    }

    // POSICIONA O NAVIO 4 OU EXIBE MENSAGEM DE ERRO

    if (posicionamentoValidoNv4) {
        for(int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaInicialNavio4 + i][colunaInicialNavio4 + i] = valorNavio;
        }

        printf("Coordenadas do Navio 4:\n");
        for (int j = 0; j < tamanhoNavio; j++) {
            printf("Parte %d: Linha %d, Coluna %d\n", j + 1, linhaInicialNavio4 + j, colunaInicialNavio4 + j);
        }
    } else {
        printf("O posicionamento do navio 4 é inválido\n");
    }
    
    printf("\n");

    // EXIBIR TABULEIRO
    printf("\n  TABULEIRO 10X10 \n");
    for (int i = 0; i < 10; i++) {
       for (int j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);
       }
       printf("\n");
    }


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