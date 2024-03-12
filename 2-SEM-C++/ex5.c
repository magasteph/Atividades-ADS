#include <stdio.h>

int main() {
    
    float notas[3][3];

    printf("Digite as notas dos alunos (3x3):\n");
    for (int i = 0; i < 3; i++) {
        printf("Notas do aluno %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\nRelatório de Menor Nota por Aluno:\n");
    for (int i = 0; i < 3; i++) {
        float menorNota = notas[i][0];
        int provaMenorNota = 1;

        for (int j = 1; j < 3; j++) {
            if (notas[i][j] < menorNota) {
                menorNota = notas[i][j];
                provaMenorNota = j + 1;
            }
        }

        printf("Aluno %d: Prova %d\n", i + 1, provaMenorNota);
    }

    return 0;
}
