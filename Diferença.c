/******************************************************************************

02/05/2023 - Victor Prearo - Calcular a diferença entre dois números

*******************************************************************************/
#include <stdio.h>

int calculo;

int main () {
	int a, b, aux;
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &a);
	printf("Insira o segundo valor: ");
	scanf("%d", &b);
	calculo ();
	printf ("Diferenca entre os dois valores: %d", calculo(a,b,aux));
	
	return 0;
}

int calculo (int a, int b, int aux) {
	aux = a - b;
	 return aux;
}

