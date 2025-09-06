#include <stdio.h>
#include <stdbool.h>

void media_notas() {
    float nota1, nota2, nota3;
    printf("Insira 3 notas:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    float media = (nota1 + nota2 + nota3) / 3;
    printf("Sua média é: %.1f\n", media);
}

void desconto_10() {
    float preco_prod;
    printf("QUAL O PREÇO A RECEBER DESCONTO?\n");
    scanf("%f", &preco_prod);
    float desconto = preco_prod * 0.9;
    printf("O NOVO PREÇO É: %.2f R$", desconto);
}

void main() {
    media_notas();
    desconto_10();
}