#include <stdio.h>
#include "aula.h"

int main() {
    float inicio1, fim1, inicio2, fim2;
    
    printf("Insira os horarios das aulas:");
    printf("Digite o começo e o fim da primeira aula:");
    scanf("%f %f", &inicio1, &fim1);
    if (!valida_horario(inicio1, fim1)) {
        printf("Horario de aula inválido! \n");
        return 1;
    }
    printf("Insira os horarios das aulas:");
    printf("Digite o começo e o fim da segunda aula:");
    scanf("%f %f", &inicio2, &fim2);
    if (!valida_horario(inicio2, fim2)) {
        printf("Horario de aula inválido! \n");
        return 1;
    }
    int conflito = aulas_conflitam(inicio1, fim1, inicio2, fim2);
    resultado(conflito);
    return 0;
}