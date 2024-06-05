#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, sub, div, mul;

    printf("Calculadora \n");
    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &num1, &num2 );

    soma = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf(" Soma: %d \n", soma);
    printf("Subtracao: %d \n ", sub);
    printf("Multiplicacao: %d \n ", mul);
    printf("Divisao: %d \n", div);

    return 0;
}
