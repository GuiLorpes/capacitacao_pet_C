#include <stdio.h>
#include <string.h>

typedef unsigned int uint;

typedef struct {
    char Titulo[255];
    char Autor[255];
    uint Ano;
} Livro;

Livro dadosLivros(uint livros) {
    Livro L[livros - 1];
    Livro *ptr = L;
    uint ano;
    for (int i = 0; i < livros; i++) {
        printf("Insira as informações do livro %i\n", i + 1);
        printf("Qual o titulo do seu livro?\n");
        getchar();
        fgets(ptr[i].Titulo, 255, stdin);
        ptr[i].Titulo[strcspn(ptr[i].Titulo, "\n")] = '\0';
        printf("Qual o autor do seu livro?\n");
        fgets(ptr[i].Autor, 255, stdin);
        ptr[i].Autor[strcspn(ptr[i].Autor, "\n")] = '\0';
        printf("Que ano seu livro foi lançado?\n");
        scanf("%u", &ano);
        ptr[i].Ano = ano;
    }
    return L[livros - 1];
}

int main() {
    uint livros;
    uint ano;
    printf("Quantos livros você tem?\n");
    scanf("%u", &livros);
    Livro L[livros];
    Livro *ptr = L;
    for (int i = 0; i < livros; i++) {
        printf("Insira as informações do livro %i\n", i + 1);
        printf("Qual o titulo do seu livro?\n");
        getchar();
        fgets(ptr[i].Titulo, 255, stdin);
        ptr[i].Titulo[strcspn(ptr[i].Titulo, "\n")] = '\0';
        printf("Qual o autor do seu livro?\n");
        fgets(ptr[i].Autor, 255, stdin);
        ptr[i].Autor[strcspn(ptr[i].Autor, "\n")] = '\0';
        printf("Que ano seu livro foi lançado?\n");
        scanf("%u", &ano);
        ptr[i].Ano = ano;
    }
    for (int i = 0; i < livros; i++){
        printf("Informações do livro %i:\n", i + 1);
        printf("Titulo: %s\nAutor: %s\nAno: %u\n", ptr[i].Titulo, ptr[i].Autor, ptr[i].Ano);
    }
    return 0;
}