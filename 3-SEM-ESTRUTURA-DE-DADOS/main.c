#include <stdio.h>

int main() {
  int linha;
  int coluna;
  int i;
  int somaprod;
  int matrizA[4][4], matrizB[4][4], matrizC[4][4] = {0};



  printf("Matriz - A\n");
  for(linha = 0; linha < 4; linha++)
    {
      for(coluna = 0; coluna < 4; coluna++)
        {
          matrizA[linha][coluna] = (linha + coluna) * 4;

          printf("%2d ", matrizA[linha][coluna]);
        }
        printf("\n");
    }

  printf("\n\n");
  
  printf("Matriz - B\n");
  for(linha = 0; linha < 4; linha++)
    {
      for(coluna = 0; coluna < 4; coluna++)
        {
          matrizB[linha][coluna] = (linha + coluna) * 3;

          printf("%2d ", matrizB[linha][coluna]);
        }
        printf("\n");
    }
  
  printf("\n\n");

  printf("Resultado da multiplicação - A * B\n");
  for(linha = 0; linha < 4; linha++)
  {
   for(coluna = 0; coluna < 4; coluna++)
   {
    somaprod=0;
    for(i = 0; i < 4; i++)
      somaprod += matrizA[linha][i] * matrizB[i][coluna];
     
    matrizC[linha][coluna]=somaprod;
   }
    for(i=0;i<4;i++)
    {
      printf( "%4d ", matrizC[linha][i]);
      }
      printf("\n");
  } 
  return 0;
}