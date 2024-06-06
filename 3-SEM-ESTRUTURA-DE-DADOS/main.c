#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizA[4][4], matrizB[4][4], matrizC[4][4];
    int i, j;

    for(i=0; i<4;i++){
        for(j=0;j<4;j++){
            matrizA[i][j] = (i + j)*2;
            printf(" %d ", matrizA[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<4; i++){
        for(j=0;j<4; j++){
            matrizB[i][j] = (((i + j) *2) -100);
            printf(" %d ", matrizB[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<4;i++){
        for(j=0;j<4;j++){
            matrizC[i][j]= matrizA[i][j] + matrizB[i][j];

            printf(" %d ", matrizC[i][j]);
        }
        printf(" \n ");
    }

    return 0;
}
