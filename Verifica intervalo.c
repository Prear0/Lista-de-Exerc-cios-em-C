
#include <stdio.h>

int verificaIntervalo(int ,int, int);

int main() {
    int x, min, max;
    
    printf (" Insira o valor:");
    scanf ("%d", &x);
    printf (" Insira o valor minimo:");
    scanf ("%d", &min);
    printf (" Insira o valor maximo:");
    scanf ("%d", &max);

    if (verificaIntervalo(x , min, max)){
    	printf("O valor %d esta dentro do intervalo", x);
	} else{
		printf("O valor %d esta fora do intervalo", x);
	}
}

int verificaIntervalo (int x, int min, int max) {
    return (x>=min && x<=max);
}
