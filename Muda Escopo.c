
#include <stdio.h>


int muda(int n) {
    
    n=10;
    printf("n = %d no escopo muda\n", n);
    return n;
}

int main()
{
    int n=5;
    printf("n = %d no escopo main\n",n);
    
    printf("n = %d no escopo muda(escopo muda) dentro do escopo main\n", muda(n));
    
    return 0;
}
