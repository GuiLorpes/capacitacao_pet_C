#include <stdio.h>

int main() {
    double x, y;
    double operação;
    unsigned short opcao;
    printf("Que operação você deseja realizar?\n");
    printf("1 -> Somar\n2 -> Subtrair\n3 -> Multiplicar\n4 -> Dividir\n");
    scanf("%hu", &opcao);
    switch (opcao) {
        case 1:
            printf("Escolha dois numeros para somar:\n");
            scanf("%le %le", &x, &y);
            operação = x + y;
            printf("Sua operação resultou em: %2.f\n", operação);
            break;
        case 2:
            printf("Escolha dois numeros para subtrair:\n");
            scanf("%le %le", &x, &y);
            operação = x - y;
            printf("Sua operação resultou em: %2.f\n", operação);
            break;
        case 3:
            printf("Escolha dois numeros para multiplicar:\n");
            scanf("%le %le", &x, &y);
            operação = x * y;
            printf("Sua operação resultou em: %2.f\n", operação);
            break;
        case 4:
            printf("Escolha dois numeros para dividir:\n");
            scanf("%le %le", &x, &y);
            if (y == 0) {
                printf("Não é possivel dividir por 0!!");
            }
            else {
                operação = x / y;
                printf("Sua operação resultou em: %2.f\n", operação);
            }
            break;
        default:
            printf("Escolha inválida!!\n");
        }
}