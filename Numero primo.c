/******************************************************************************

22/03/2023 - Victor Prearo - Somar a quantidade de números primos

*******************************************************************************/
#include <stdio.h>

int primo (int x) {
  int retorno = 1; 
  for (int i=2; i<= x/2; i++)
    if (x%i==0) retorno = 0; 
    
  return retorno;
}
int somaPrimo (int n) {
    int soma=0, aux=1;
    while (n>0) {
        if (primo (aux)) {
            soma=soma+aux;n--;  
        }
        aux++;
    }
    return soma;
}

int main(){
    int n, soma;
    printf("Quantidade de primos que quer somar:");
    scanf ("%d", &n);
    soma = somaPrimo (n);
    printf ("Soma=%d", soma);
    return 0;
}


