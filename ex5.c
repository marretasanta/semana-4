#include <stdio.h>
#include <stdbool.h>

bool primo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N1, N2;

    printf("Digite dois numeros inteiros \n");
    printf("\nN1:");
    scanf("%d", &N1);
    printf("N2:");
    scanf("%d" , &N2);

    printf("\nNumeros primos entre %d e %d:\n", N1, N2);
    for (int i = N1; i <= N2; i++) {
        if (primo(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}