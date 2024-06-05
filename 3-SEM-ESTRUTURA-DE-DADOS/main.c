#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5] = {10,20,30,40,50};
    int i;
    float soma = 0;

    for(int i=0; i<5; i++){
        soma += v[i];
    }

    printf("%f", soma/5);
}
