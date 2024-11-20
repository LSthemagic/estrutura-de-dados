#include <stdio.h>
#include <stdlib.h>

int soma_digitos(int digito)
{
   if (digito == 0)
        return 0;

    // Passo recursivo: soma o último dígito com a soma dos outros dígitos
    return (digito % 10) + soma_digitos(digito / 10);
}

int main()
{
    printf("%d", soma_digitos(123));
    return 0;
}
