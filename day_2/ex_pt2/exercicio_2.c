#include <stdio.h>

int main() {
    double x, y;
    double operação;
    unsigned short opcao;
    do {
        printf("Que operação você deseja realizar?\n");
        printf("0 -> Sair\n1 -> Somar\n2 -> Subtrair\n3 -> Multiplicar\n4 -> Dividir\n");
        scanf("%hu", &opcao);
        switch (opcao) {
            case 0:
                printf("Até mais!\n");
                break;
            case 1:
                printf("Escolha dois numeros para somar:\n");
                scanf("%lf %lf", &x, &y);
                operação = x + y;
                printf("Sua operação resultou em: %.2lf\n", operação);
                break;
            case 2:
                printf("Escolha dois numeros para subtrair:\n");
                scanf("%lf %lf", &x, &y);
                operação = x - y;
                printf("Sua operação resultou em: %.2lf\n", operação);
                break;
            case 3:
                printf("Escolha dois numeros para multiplicar:\n");
                scanf("%lf %lf", &x, &y);
                operação = x * y;
                printf("Sua operação resultou em: %.2lf\n", operação);
                break;
            case 4:
                printf("Escolha dois numeros para dividir:\n");
                scanf("%lf %lf", &x, &y);
                if (y == 0) {
                    printf("Não é possivel dividir por 0!!");
                }
                else {
                    operação = x / y;
                    printf("Sua operação resultou em: %.2lf\n", operação);
                }
                break;
            default:
                printf("Escolha inválida!!\n");
            }
    }
    while (opcao != 0);
}