#include <stdio.h>
int main() {
  int MatrizA[4][4] = {{1, 2, 5, 6},
                      {5, 8, 4, 9}, 
                      {5, 2, 8, 4}, 
                      {8, 4, 7, 1}};

  int i;
  int soma = 0;

  for (i = 0; i < 4; i++) {
    if (MatrizA[i][i] % 2 == 0) {
      soma += MatrizA[i][i];
    }
  }
  printf("A soma dos valores pares na diagonal é de %d \n", soma);
  return 0;
};
