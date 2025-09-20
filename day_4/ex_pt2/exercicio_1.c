#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;

void alteraValores(int *p, uint tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int valor;
        printf("Qual o valor você deseja para o item %i?\n", i + 1);
        scanf("%i", &valor);
        p[i] = valor;
    }
}
int main() {
    uint quantia;
    printf("Insira quantos numeros você deseja inserir: \n");
    scanf("%u", &quantia);
    int *ptr = malloc(quantia *sizeof(int));
    alteraValores(ptr, quantia);
    printf("Os valores escolhidos foram os seguintes: \n");
    for (int i = 0; i < quantia; i++) {
        printf("%i", ptr[i]);
    }
    printf("\n");
    free(ptr);
    ptr = NULL;
    return 0;
}