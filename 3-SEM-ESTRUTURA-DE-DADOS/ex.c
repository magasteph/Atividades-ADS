#include <stdio.h>
int main() {

  int vet[5] = {10, 20, 30, 40, 50};
  int i;
  // printf("%d %d %d %d %d" , vet[0], vet[1], vet[2],vet[3], vet[4]); - não
  // podemos fazer isso

  for (i = 0; i < 5; i++) {
    printf("%d , ", vet[i]);
  }
}
