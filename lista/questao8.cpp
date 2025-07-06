#include <stdio.h>

int fatorial_iterativo(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int fatorial_recursivo(int n) {
    if (n <= 1) return 1;
    return n * fatorial_recursivo(n - 1);
}

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    printf("%d! = %d (Iterativo)\n", n, fatorial_iterativo(n));
    printf("%d! = %d (Recursivo)\n", n, fatorial_recursivo(n));

    return 0;
}

