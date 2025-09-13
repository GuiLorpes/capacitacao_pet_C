#include <stdio.h>

int tamanho = 10;

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

int achaMaior(int numeros[], int tamanho) {
    int maior = numeros[0];
    for (int i = 1; i < tamanho; i++){
        if (maior < numeros[i]) {
            maior = numeros[i];
        }
    }
    return maior;
}

int main() {
    int numeros[tamanho];
    for (int i = 0; i < tamanho; i++) {
        printf("Insira um numero para a posição %i:\n", i);
        scanf("%i", &numeros[i]);
    }
    printf("Seu array é:\n");
    imprimeNumeros(numeros, tamanho);
    int maior_numero = achaMaior(numeros, tamanho);
    printf("O maior numero da sua lista é: %i\n", maior_numero);
    return 0;
}