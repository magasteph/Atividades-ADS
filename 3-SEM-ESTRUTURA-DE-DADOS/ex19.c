#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota1, nota2, nota3, nota4, media;
  nota1 = nota2 = nota3 = nota4 = media = 0;

  printf("Media escolar 1.0\n");
  printf("Digite a sua primeira nota bimestral: \n");
  scanf("%f", &nota1);
  printf("Digite a sua segunda nota bimestral:\n");
  scanf("%f", &nota2);
  printf("Digite a sua terceira nota bimestral: \n");
  scanf("%f", &nota3);
  printf("Digite a sua quarta nota bimestral: \n");
  scanf("%f", &nota4);

  media = (nota1 + nota2 + nota3 + nota4)/4;
  printf("Sua média é de %f \n", media);

  if(media>=7){
    printf("Voce foi aprovado\n");
  }else{
    printf("Voce foi reprovado");
  }
  
  return 0;
}
