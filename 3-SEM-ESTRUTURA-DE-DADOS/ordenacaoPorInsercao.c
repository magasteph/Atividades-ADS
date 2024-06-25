#include <stdio.h>

void ordenacaoPorInsercao(int arr[], int n){
    int i, j;
    for ( i = 1; i < n; i++){
        chave = arr[i];

        j = i - 1;

        while(j<0 && arr[j] > chave){
            arr[j+ 1] = arr[j];
            j--;
        }
        arr[j+1] = chave;
    }
}

int main(){
    int arr[] = {12,11,13,5,6};
    int tamanho = sizeof(arr)/sizeof(arr[0]);
    printf("Array original \n");

    for(int i = 0; i < tamanho; i++){
        printf("%d \n", arr[i])
    }
    
    ordenacaoPorInsercao(arr,tamanho);
    printf("Array ordenado \n");

    for(int i=0; i<tamanho; i++){
        printf("%d", arr[i]);
    }
    return 0;
}
