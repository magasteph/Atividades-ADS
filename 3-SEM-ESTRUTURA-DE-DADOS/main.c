#include <stdio.h>
#include <stdlib.h>

int main()
{
    // criar um scanf para o usuario colocar os dados do vetor e depois mostrar
    int v[5];
    int i;

    for(i=0; i<5; i++){
        printf("Digite os numeros dos vetores:\n");
        scanf("%d", &v[i]);
    }

    printf("Estes sao os numeros escolhidos:\n");

    for(i=0; i<5; i++){
        printf(" %d ", v[i]);
    }

    return 0;
}
