#include <stdio.h>
int buscaSequencial(int array[], int tamanho, int chave)
{
    for (int i = 0; i < tamanho; i++){
        if (array[i] == chave){
            return i; 
        }
    }
    return -1;
}

int main(){
    int array[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91},
     tamanho, chave, resultado;
    
    tamanho = sizeof(array) / sizeof(array[0]);
    chave = 23;
    resultado = buscaSequencial(array, tamanho, chave);
    if (resultado != -1){
        printf("A chave %d foi encontrada no índice %d.\n", chave, resultado); 
    }else{
        printf("A chave %d não foi encontrada no array.\n", chave);
    }
    return 0;
}
