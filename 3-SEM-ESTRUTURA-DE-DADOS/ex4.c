#include <stdio.h>

struct produto{
  int cod;
  float valor;
};

int main(){
  
  struct produto p;

  printf("digite o codigo do produto: \n");
  scanf("%d", &p.cod);
  
  printf("digite o valor do produto em reais: \n");
  scanf("%.2f", &p.valor);
  
  printf("Os dados são : \n ");
  printf("Código: %d \n", p.cod);
  printf("Valor: %.2f \n", p.valor);
}
