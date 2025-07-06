#include <stdio.h>

void fibonacci(int n, int a, int b) {
    if (n == 0) return;
    printf("%d ", a);
    fibonacci(n - 1, b, a + b);
}

int main() {
    int n;
    printf("Digite a quantidade de parcelas da série de Fibonacci: ");
    scanf("%d", &n);

    printf("Série de Fibonacci:\n");
    fibonacci(n, 1, 1);
    printf("\n");

    return 0;
}

