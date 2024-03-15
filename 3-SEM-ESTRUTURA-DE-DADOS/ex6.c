#include <stdio.h> 
int main(){
  int MatrizA[4][4] = {{1,2,5,6},
                      {5,8,4,9},
                     {5,2,8,4},
                      {8,4,7,1}};

int i;
int soma = 0;

  for(i=0;i<4;i++){
    soma += MatrizA[i][3];
  }
printf("A soma dos valores da ultima coluna é de: %d \n", soma);
return 0 ;      
};
