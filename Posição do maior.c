
#include <stdio.h>


int posicaoMaior(int a, int b, int c){
    
    int posicao;
    if (a<b && b>c){
        posicao = 2;
    }
    if (a>b && a>c){
        posicao = 1;
    }
    if (c>a && c>b){
        posicao = 3;
    }
    
    return posicao;
}


int main()
{
    
    int a=3, b=4, c=5, maior;
    
    maior = posicaoMaior(a,b,c);
    
    printf ("Nessa sequencia, o maior numero esta na posição %d", maior);

    return 0;
}

