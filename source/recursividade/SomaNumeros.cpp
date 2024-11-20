#include <stdio.h>
#include <stdlib.h>

int soma_primeiros_numeros(int num){
    if (num == 0) return 0;
    else return num + soma_primeiros_numeros(num - 1);
}

int main()
{
    int num;
    printf("Digite um número: ");
    scanf("%d",&num);
    printf("A soma dos n numeros ate %d e: %d", num, soma_primeiros_numeros(num));
    return 0;
}
