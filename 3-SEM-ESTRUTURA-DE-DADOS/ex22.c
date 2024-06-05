#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int numero = 0;
  int i = 1;
  
  printf("Digite a quantidade de vezes de repetição\n");
  scanf("%d", &numero);
  while(i<=numero){
    printf("repetindo %i vez \n", i );
    i++;
  }
  
  
 return 0;
}
