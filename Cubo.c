#include <stdio.h>

int cubo(int valor) {
    int cubo = valor * valor * valor;
    return cubo;
}

int main() {
    int valor, resultado;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    resultado = cubo(valor);

    printf("O cubo de %d sera %d\n", valor, resultado);

    return 0;
}

