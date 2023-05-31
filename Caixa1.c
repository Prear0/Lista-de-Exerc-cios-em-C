
/******************************************************************************

02/05/2023 - Victor Prearo - Caixa Eletrônico

*******************************************************************************/
#include <stdio.h>

float deposito();
float saque(float conta);
void saldo(float conta);

int main(){
	float conta=0;
	int check=1, option;
	printf("\nCAIXA ELETRONICO\nSELECIONE A OPERACAO");
	while(check){
		printf("\n1 - SALDO\n2 - DEPOSITO\n3 - SAQUE\n4 - ENCERRAR\n->"); scanf("%d", &option);
		switch(option){
			case 1: saldo(conta); break;
			case 2: conta+=deposito(); printf("Concluido"); break;
			case 3: conta-=saque(conta); printf("Concluido"); break;
			case 4: check=0; break;
			default: printf("\n	Operacao impossivel, insira outro numero.\n");
		}
	}
	printf("\nObrigado por utilizar o caixa\n");
	
	return 0;
}


float deposito(){
	float num;
	printf("Insira o valor para o deposito: "); scanf("%f", &num);
	while(num<=0){
		printf("Valor invalido\nInsira o valor novamente: "); scanf("%f", &num);
	}
	return num;
}

float saque(float conta){
	float num;
	printf("Insira o valor de saque: "); scanf("%f", &num);
	while(num<=0 || num>conta){
		printf("Valor invalido\nInsira o valor novamente: "); scanf("%f", &num);
	}
	return num;
}

void saldo(float conta){
	printf("O saldo da sua conta e de %.2f reais\n", conta);
}


