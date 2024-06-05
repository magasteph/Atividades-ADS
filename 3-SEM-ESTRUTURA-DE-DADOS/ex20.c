#include <stdio.h>
#include <stdlib.h>

int main(){

  int iJ, iI;
  iJ = 17;
  iI = 60;
  int idade = 0;

  printf("Digite a sua idade: \n");
  scanf("%d",&idade);

  if(idade<= iJ){
    printf("Jovem");
  }else if(idade >=iI){
    printf("Idosa(o)");
  }else if ((idade> iJ) && (idade<iI)){
    printf("Meia Idade");
  }
  return 0;
}
