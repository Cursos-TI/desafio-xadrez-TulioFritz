#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas){
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas){
    if (casas > 0) {
    
    for (int i = 0; i <=5; i++);{
        printf("Cima\t");
    
    for (int j = 0; j <= 5; j++);{
        printf("Direita\n");
    }
    }
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas){
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}
//loop complexo do cavalo
void moverCavalo(){
    int i, j;
    for ( i = 0; i < 2; i++) { //move 2 casas para cima
        printf("Cima\n");
    }
    for ( j = 0; j < 1; j++) { //move 1 casa para a esquerda
        printf("Esquerda\n");
    }
}

int main() {
    //Movimento da Torre
    printf("Movimento da Torre: \n");
    moverTorre(5);
    printf("\n"); //separação

    //Movimento do Bispo ( usando loops aninhados )
    printf("Movimento do Bispo: \n");
    moverBispo(4);
    printf("\n"); //separação

    //Movimento da Rainha
    printf("Movimento da Rainha: \n");
    moverRainha(8);
    printf("\n"); //separação

    //Movimento do Cavalo ( usando loops aninhados )
    printf("Movimento do Cavalo: \n");
    moverCavalo();
    printf("\n"); //separação

    return 0;
}
