/******************************************************************************

15/02/2023 - Victor Augusto Prearo - Exercício 3, Lista 1

*******************************************************************************/
#include <stdio.h>

int
main ()
{

  float carros, vendas, salario, valorporcarro, bonus, bonustotal, comissao,
    salariofinal;

  printf ("Insira o total de carros vendidos: ");
  scanf ("%f", &carros);

  printf ("Insira o valor total de vendas no mes: ");
  scanf ("%f", &vendas);

  printf ("Insira o salario fixo: ");
  scanf ("%f", &salario);

  printf ("Insira o valor recebido por carro vendido: ");
  scanf ("%f", &valorporcarro);

  comissao = carros * valorporcarro;

  bonus = vendas * 0.05;

  bonustotal = vendas + bonus;

  salariofinal = salario + bonustotal + comissao;

  printf ("O salario total do funcionario sera R$ %.2f \n ", salariofinal);


  return 0;
}
