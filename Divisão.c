#include <stdio.h>

float divisao(int dividendo, int divisor){
    if (divisor == 0) {
        printf("Nao e possivel dividir por zero.\n");
        return 0;
    } else {
        return (float) dividendo*1.0 / divisor;
    }
}

int main() {
    int dividendo, divisor;
    float resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &dividendo);

    printf("Digite o segundo numero: ");
    scanf("%d", &divisor);

    resultado = divisao(dividendo, divisor);

    printf("O resultado da divisao sera: %.2f\n", resultado);

    return 0;
}
