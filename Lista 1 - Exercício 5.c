/******************************************************************************

15/02/2023 - Victor Prearo - Exercício 5, Lista 1

*******************************************************************************/
#include <stdio.h>

int main () {

  float salario, vendas, vendasMenor, vendasMaior;
  
  printf ("Insira seu salario fixo: ");
  scanf ("%f", &salario);
  
  printf ("Insira o valor total das vendas: ");
  scanf ("%f", &vendas);
  
  vendasMenor = vendas * 0.03;
  vendasMaior =  vendas * 0.05;
  
  
  if (vendas <= 1500) {
      printf("O salario total sera R$ %.2f", vendasMenor + salario);
  }
  else {
      printf("O salrio total sera R$ %.2f", vendasMaior + salario);
  }


  return 0;
}



