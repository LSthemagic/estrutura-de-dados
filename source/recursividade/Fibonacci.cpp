#include <stdio.h>
#include <stdlib.h>

int fibonacci(int numero){
    if(numero < 0) return -1;
    if(numero == 0) return 0;
    if(numero == 1) return 1;
    return (fibonacci(numero - 1) + fibonacci(numero - 2));
}

int main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    printf("%d", fibonacci(numero));
    return 0;
}
