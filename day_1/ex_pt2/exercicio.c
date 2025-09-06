#include <stdio.h>

void get_numero() {
    int numero;
    scanf("%i", &numero);
    printf("%i\n", numero);
}

void get_nome() {
    char nome[255];
    fgets(nome, 255, stdin);
    printf("%s\n", nome);
}

int main(void) {
    get_numero();
    getchar();
    get_nome();
}
