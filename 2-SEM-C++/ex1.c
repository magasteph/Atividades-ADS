#include <stdio.h>

int main() {


 	int matriz [3] [4], i, j;
    
    printf("Digite os elementos da matriz 3x4:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++) {
            printf("%d", matriz[i][j]);
            if (j < 3) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
