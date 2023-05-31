/******************************************************************************

15/02/2023 - Victor Augusto Prearo - Exercício 2, Lista 1

*******************************************************************************/
#include <stdio.h>

int main() {
    
    float total, brancos, nulos, validos, tbrancos, tnulos, tvalido;
    
    printf ("Insira o total de eleitores: ");
    scanf("%f", &total);
    
    printf ("Insira o total de votos em branco: ");
    scanf("%f", &brancos);
    
    printf ("Insira o total de votos nulos: ");
    scanf("%f", &nulos);
    
    validos = total - brancos - nulos;
    
    tbrancos = brancos/total * 100;
    
    tnulos = nulos/total * 100;
    
    tvalido = validos/total * 100;
    
    printf("O percentual de validos sera %.2f \n ", tvalido);
    printf("O percentual de brancos sera %.2f \n ", tbrancos);
    printf("O percentual de nulos sera %.2f \n", tnulos);
    
    

    return 0;
}
