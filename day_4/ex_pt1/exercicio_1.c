#include <stdio.h>
#include <string.h>

typedef unsigned int uint;

typedef struct {
    char Titulo[255];
    char Autor[255];
    uint Ano;
} Livro;

Livro dadosLivro() {
    Livro L;
    uint ano;
    printf("Qual o titulo do seu livro?\n");
    fgets(L.Titulo, 255, stdin);
    L.Titulo[strcspn(L.Titulo, "\n")] = '\0';
    printf("Qual o autor do seu livro?\n");
    fgets(L.Autor, 255, stdin);
    L.Autor[strcspn(L.Autor, "\n")] = '\0';
    printf("Que ano seu livro foi lançado?\n");
    scanf("%u", &ano);
    L.Ano = ano;
    return L;
}

int main() {
    Livro L = dadosLivro();
    printf("Informações do seu livro:\n");
    printf("Titulo: %s\nAutor: %s\nAno: %u\n", L.Titulo, L.Autor, L.Ano);
    return 0;
}