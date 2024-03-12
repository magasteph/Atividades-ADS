#include <stdio.h>

int main() {
	
    int matriz[2][2], i , j;

   
    printf("Digite os elementos da matriz (2x2):\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    int maiorElemento = matriz[0][0];
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            if (matriz[i][j] > maiorElemento) {
                maiorElemento = matriz[i][j];
            }
        }
    }

    printf("\nMatriz R resultante da multiplicação pelos maiores elementos:\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j] * maiorElemento);
        }
        printf("\n");
    }

    return 0;
}
