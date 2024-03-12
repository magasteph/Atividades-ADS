#include <stdio.h>


void exibirTabuleiro(char tabuleiro[3][3]) {
    printf("\n  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
   
    char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};


    int linha, coluna;

 
    for (int jogada = 1; jogada <= 9; jogada++) {
       
        exibirTabuleiro(tabuleiro);

   
        printf("Jogador %d, digite o número da linha (1 a 3) e da coluna (1 a 3) separados por espaço: ", (jogada % 2) + 1);
        scanf("%d %d", &linha, &coluna);

        
        if (tabuleiro[linha - 1][coluna - 1] == ' ') {
          
            tabuleiro[linha - 1][coluna - 1] = (jogada % 2 == 0) ? 'O' : 'X';
        } else {
       
            printf("Posição já ocupada. Tente novamente.\n");
            jogada--;
        }
    }

    
    exibirTabuleiro(tabuleiro);

    return 0;
}
