#include <stdio.h>

int fatorial(int n){
  if(n == 0 || n == 1){
    return 1;
  }else{
    return n * fatorial(n - 1);
  }
  
}

int main() {
  int n;

  printf("Digite um valor maior que zero:");
  scanf("%d", &n);
  printf("Fatorial: %d", fatorial(n));


  return 0;
}
