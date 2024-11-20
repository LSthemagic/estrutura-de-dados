#include <stdio.h>
#include <stdlib.h>

int fatorial(int numero){
    if (numero == 1 || numero == 0) return 1;
    printf("%d * ",numero);
    if (numero == 2) printf("1");
    return (numero * fatorial(numero - 1));
}

int main()
{
    int numero;
    printf("Fatorial de qual numero?\n");
    scanf("%d",&numero);
    printf("\n%d",fatorial(numero));
    return 0;
}
