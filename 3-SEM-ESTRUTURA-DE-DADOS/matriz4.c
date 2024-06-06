#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizA[4][4], matrizB[4][4], matrizC[4][4];
    int i, j;

    for(i=0; i<4; i++){
        for(j=0;j<4;j++){
            if(i%2==0){
                matrizA[i][j]= ((i+j)*2)-50;
                printf(" %d ", matrizA[i][j]);
            }else{
                matrizA[i][j]=((i+j)*3)-70;
                printf(" %d ", matrizA[i][j]);
            }

        }
        printf("\n");
    }
    printf("\n");

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            matrizB[i][j] = ((i+j)*3)-90;
            printf(" %d ", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0;i<4; i++){
        for(j=0; j<4;j++){
            matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
            printf(" %d ", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
