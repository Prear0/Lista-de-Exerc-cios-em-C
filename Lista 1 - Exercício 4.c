/******************************************************************************

15/02/2023 - Victor Prearo - Exercício 4, Lista 1

*******************************************************************************/
#include <stdio.h>

int main () {

  float macas, valor, valord, total;

  printf ("Quantidade de macas que deseja comprar: ");
  scanf ("%f", &macas);
  
  valor = 1.30 * macas;
  valord =  1 * macas;
  
  if (macas < 12) {
      printf("O valor total sera R$ %.2f", valor);
  }
  else {
      printf("O valor total sera R$ %.2f", valord);
  }


  return 0;
}


