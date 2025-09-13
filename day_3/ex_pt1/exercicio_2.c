#include <stdio.h>

void trocaValores(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int *p1, *p2;
    int numA, numB;
    printf("Escolha dois valores: \n");
    scanf("%i %i", &numA, &numB);
    p1 = &numA;
    p2 = &numB;
    printf("O valor A está alocado em: %p\nE tem valor: %i\n", p1, *p1);
    printf("O valor B está alocado em: %p\nE tem valor: %i\n", p2, *p2);
    trocaValores(p1, p2);
    printf("O novo valor de A está alocado em: %p\nE tem valor: %i\n", p1, *p1);
    printf("O novo valor de B está alocado em: %p\nE tem valor: %i\n", p2, *p2);
}