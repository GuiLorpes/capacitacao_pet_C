#include <stdio.h>

// Exercicio 1

int get_numero() {
    long long numero;
    printf("Qual número você quer?\n");
    scanf("%lld", &numero);
    if (numero > 0) {
        printf("Seu número é positivo!!\n");
    }
    else if (numero < 0) {
        printf("Seu número é negativo!!\n");
    }
    else {
        printf("Seu número é zero!!\n");
    }
}

// Exercicio 2

int get_idade() {
    unsigned short idade;
    printf("Quantos anos você tem?\n");
    scanf("%hu", &idade);
    if (idade < 12) {
        printf("Você é uma criança!\n");
    }
    else if (idade >= 12 && idade <= 17) {
        printf("Você é um adolescente!\n");
    }
    else if (idade >= 18 && idade <= 59) {
        printf("Você é um adulto!\n");
    }
    else { // Idade >= 60
        printf("Você é um idoso!!\n");
    }
}

int main() {
    get_numero();
    getchar();
    get_idade();
}

