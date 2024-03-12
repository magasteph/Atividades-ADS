#include <stdio.h>

int main() {
 
    int matrizId [3] [3], i , j;
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            if (i == j) {
                matrizId[i][j] = 1;
            } else {
                matrizId[i][j] = 0;
            }
        }
    }

    printf("Matriz Identidade 3x3:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d", matrizId[i][j]);
            if (j < 2) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
