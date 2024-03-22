#include <stdio.h>

float calcularSoma(int n) {
    float soma = 0;
    for (int k = 1; k <= n; k++) {
        float termo = (float)k / (float)(k*k) * ((k+1) % 2 == 0 ? -1 : 1);
        soma += termo;
    }
    return soma;
}

int main() {
    int n;
    printf("Digite um valor numerico: ");
    scanf("%d", &n);

    float resultado = calcularSoma(n);
    printf("Resultado da expressao: %.10f\n", resultado);

    return 0;
}