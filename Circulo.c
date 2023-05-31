/******************************************************************************

02/05/2023 - Victor Prearo - Calcular área do círculo

*******************************************************************************/
#include <stdio.h>
#define PI 3.14159

float calcularArea(float raio) {
    float area = PI * raio * raio;
    return area;
}

int main() {
    float raio, area;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = calcularArea(raio);

    printf("A area do circulo sera %.2f\n", area);

    return 0;
}
