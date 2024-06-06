#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#define TAM 50

struct exercicio{
  int idade;
  float peso;
  char nome[TAM];
};

typedef struct exercicio exercicio;


int main() {
  exercicio dois = {0,0.0, "Teste"};

  printf("Inicio: \n");
  printf("dois.idade: %d \n", dois.idade);
  printf("dois.peso: %.2f \n", dois.peso);
  printf("dois.nome: %s \n", dois.nome);


  dois.idade = 21;
  dois.peso = 60.0;
  strcpy(dois.nome, "Stephanne");

  printf("Inicio: \n");
  printf("dois.idade: %d \n", dois.idade);
  printf("dois.peso: %.2f \n", dois.peso);
  printf("dois.nome: %s \n", dois.nome);

  
  printf("Insira sua idade: ");
  scanf("%d", &dois.idade);
  printf("Insira seu peso: ");
  scanf("%f", &dois.peso);
  fflush(stdin);
  printf("Insira seu nome: ");
  scanf("%s", dois.nome);


  printf("Inicio: \n");
  printf("dois.idade: %d \n", dois.idade);
  printf("dois.peso: %.2f \n", dois.peso);
  printf("dois.nome: %s \n", dois.nome);
  return 0;
}
