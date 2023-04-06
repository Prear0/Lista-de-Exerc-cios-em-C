#include <stdio.h>

int verifica(char caractere) {
    if (caractere >= 'a' && caractere <= 'z') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char caractere;
    int resultado;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    resultado = verifica(caractere);

    if (resultado == 1) {
        printf("O caractere esta entre 'a' e 'z'.\n");
    } else {
        printf("O caractere nao esta entre 'a' e 'z'.\n");
    }

    return 0;
}
