#include <stdio.h>

float mediaNumeros(int numeros[], int tamanho);

int main() {
    int tamanho_array;
    printf("Qual o tamanho do seu array?\n");
    scanf("%i", &tamanho_array);
    int numeros[tamanho_array];
    for (int i = 0; i < tamanho_array; i++) {
        printf("Insira um numero para a posição %i:\n", i);
        scanf("%i", &numeros[i]);
    }
    float media = mediaNumeros(numeros, tamanho_array);
    printf("A media dos itens do seu array é igual a:\n%.2f\n", media);
    return 0;
}

float mediaNumeros(int numeros[], int tamanho) {
    float soma = 0;
    for (float i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return soma / tamanho;
}