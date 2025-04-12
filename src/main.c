#include <stdio.h>

int soma(int a, int b); // função que está no outro arquivo

int main() {
    int resultado = soma(5, 7);
    printf("Resultado da soma: %d\n", resultado);
    return 0;
}
