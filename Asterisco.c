/******************************************************************************

15/02/2023 - Victor Augusto Prearo - Quantidade de asteriscos

*******************************************************************************/

#include <stdio.h>

void asterisco(int qntd){
	int i;
	for(i=0; i<qntd; i++){
		printf(" * ");
	}
}

int main(){
	int qntd;
	printf("Insira a quantidade de * que deseja: "); 
	scanf("%d", &qntd);
	asterisco(qntd);
	return 0;
}
