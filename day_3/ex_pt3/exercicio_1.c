#include <stdio.h>

void imprimeNumeros(int numeros[], int tamanho) {
    printf("[");
    int i = 0;
    while (i < tamanho - 1) {
        printf("%i, ", numeros[i]);
        i += 1;
    }
    printf("%i", numeros[i]);
    printf("]\n");
}

void negaNumeros(int *numeros, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        numeros[i] *= -1;
    }
}

int main() {
    int tamanho_array;
    printf("Qual o tamanho do seu array?\n");
    scanf("%i", &tamanho_array);
    int numeros[tamanho_array];
    for (int i = 0; i < tamanho_array; i++) {
        printf("Insira um numero para a posição %i:\n", i);
        scanf("%i", &numeros[i]);
    }
    printf("Seu array é:\n");
    imprimeNumeros(numeros, tamanho_array);

    printf("Seu novo array é:\n");
    negaNumeros(numeros, tamanho_array);
    imprimeNumeros(numeros, tamanho_array);
    return 0;
}