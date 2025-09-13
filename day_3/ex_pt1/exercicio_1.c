#include <stdio.h>

int *ponteiro;
int numero = 100;

void modificaPonteiro(int *ponteiro) {
    *ponteiro = *ponteiro * 7;
}

int main() {
    ponteiro = &numero;
    int valor = *ponteiro;

    printf("Endereço de memoria esta no: %p\n", ponteiro);

    printf("Valor inicial: %i\n", numero);
    modificaPonteiro(ponteiro);
    printf("Valor alterado: %i\n", numero);
}