#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int i, j;

    //Movimento da Torre
    printf("Movimento da Torre: \n");
    for (i = 0; i < 5; i++) {
        printf("direita \n"); //mostra o movimento
    }

    printf("\n"); //separação

    //Movimento do Bispo
    printf("\nMovimento do Bispo: \n");
    i = 0;
    while (i < 5) {
        printf("Cima direita \n"); //mostra o movimento
    i++;
    }

    printf("\n"); //separação

    //Movimento da Rainha
    printf("\nMovimento da Rainha: \n");
    i = 0;
    do {
        printf("Todas as direções \n"); //mostra o movimento
    i++;
    }while (i < 8);

    printf("\n"); //separação

    //Movimento do Cavalo ( usando loops aninhados )
    printf("Movimento do Cavalo: \n");

    //primeiro loop para mover para baixo
    for (i = 0; i < 2; i++ ) {
        printf("Baixo\n");

    //segundo loop move 1 para esquerda
    if ( i == 1) { //if para executar o while apenas quando apresentar duas casas para baixo
    j = 0;
    while (j < 1) {
        printf("Esquerda\n");
    j++;
        }
    }
}
    return 0;
}
