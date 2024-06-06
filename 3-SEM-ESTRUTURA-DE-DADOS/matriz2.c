#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matA[4][4];
    int matB[4][4];
    int matC[4][4];
    int i,j;


    printf("Matriz A\n");
    for(i=0; i<4; i++){
        for(j=0; j<4;j++){
            matA[i][j] = (i +j)*4;

            printf("%d ", matA[i][j]);

        }
        printf("\n");
    }

    printf("Matriz B\n");
    for(i=0; i<4; i++){
        for(j=0;j<4;j++){
            matB[i][j] = matA[i][j] * 3;
            printf("%d ", matB[i][j]);
        }
        printf("\n");
    }

    printf("Matriz C\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            matC[i][j] = matA[i][j] * matB[i][j];
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
