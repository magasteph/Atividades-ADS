#include <stdio.h>

int main() {
 
    char lojas[4][50], produtos[4][50];
    float precos[4][4] ;
    int i, j;

    printf("\nDigite os nomes das lojas:\n");
    for ( i = 0; i < 4; i++) {
        printf("Loja %d: ", i+1);
        scanf("%s", lojas[i]);
    }

    printf("\nDigite os nomes dos produtos:\n");
    for ( i = 0; i < 4; i++) {
        printf("Produto %d: ", i+1);
        scanf("%s", produtos[i]);
    }

    printf("\nDigite os preços dos produtos em cada loja:\n");
    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 4; j++) {
            printf("Preço do produto %s na loja %s: R$ ", produtos[j], lojas[i]);
            scanf("%f", &precos[i][j]);
        }
    }

    printf("\nProdutos e Lojas com preços não ultrapassando R$ 120,00:\n");
    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 4; j++) {
            if (precos[i][j] <= 120.0) {
                printf("Produto: %s, Loja: %s, Preço: R$ %.2f\n", produtos[j], lojas[i], precos[i][j]);
            }
        }
    }

    return 0;
}
