#include <stdio.h>

int main() {
 
    int matrizA[2][3], matrizB[3][3], matrizC[2][3] , i , j;

    printf("Digite os elementos da matriz A (2x3):\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\nDigite os elementos da matriz B (3x3):\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("\nMatriz C (A + B):\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d", matrizC[i][j]);
            if (j < 2) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
