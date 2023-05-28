
#include <stdio.h>

int input();
int checkTriangulo(int a, int b, int c);
int tipoTriangulo(int a, int b, int c, int check);

int main(){
	int a=input(), b=input(), c=input();
	int check = checkTriangulo(a, b, c);
	tipoTriangulo(a, b, c, check);
	
	return 0;
}

int input(){
	int n;
	while(1){
		printf("Insira um lado do triangulo\n");
		scanf("%d", &n);
		if(n>0)
			break;
		else
			printf("Valor invalido\n");
	}
	
	return n;
}

int checkTriangulo(int a, int b, int c){
	if(a+b>c && b+c>a && c+a>b){
		printf("O triangulo existe\n");
		return 0;
	}
	else{
		printf("O triangulo nao existe\n");
		return 1;
	}
}


int tipoTriangulo(int a, int b, int c, int check){
	if(check==1)
		return 1;
	if(a==b && b==c)
		printf("\nO triangulo e equilatero");
	else if(a!=b && b!=c && c!=a)
		printf("\nO triangulo e escaleno");
	else
		printf("O triangulo e isoceles");
	return 0;
}


