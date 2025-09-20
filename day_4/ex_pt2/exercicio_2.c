#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros, numero, capacidade = 3, vezes = 0, i = 0;
    numeros = malloc(3 * sizeof(int));
    do {
        printf("Insira um numero:\n");
        scanf("%i", &numero);
        if (vezes == capacidade) {
            capacidade *= 2;
            numeros = realloc(numeros, capacidade * sizeof(int));
            numeros[i] = numero;
            vezes += 1;
            i += 1;
        }
        else {
            numeros[i] = numero;
            vezes += 1;
            i += 1;
        }
    } while (numero != -1);
    for (int i = 0; i < vezes - 1; i++) {
        printf("%i ", numeros[i]);
    }
    printf("\n");
    free(numeros);
    numeros = NULL;
    return 0;
}