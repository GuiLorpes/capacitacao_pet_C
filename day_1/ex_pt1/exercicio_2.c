#include <stdio.h>
#include <stdbool.h>

bool pronto = false;
int guardado = 2;

void marcar_pronto() {
    pronto = true;
}

void guardar() {
    guardado = 9;
}

int main(void) {
    printf("%s\n", pronto?"true":"false");

    marcar_pronto();
    
    printf("%s\n", pronto?"true":"false");
    
    printf("%i\n", guardado);
    
    guardar();
    
    printf("%i\n", guardado);
}