#include <stdio.h>
#include "aula.h"

int valida_horario(float inicio, float fim) {
    if (fim <= inicio || fim > 19 || fim < 7 || inicio < 7 || inicio > 19) return 1;
    return 0;
}

int aulas_conflitam(float i1, float f1, float i2, float f2) {
    if (f1 <= i2 &&  f2 >= i2) return 1;
    return 0;
}

void resultado(int conflito) {
    switch (conflito) {
        case 1:
            printf("Existe conflito\n");
            break;
        case 0:
            printf("Não existe conflito\n");
            break;
    }
}