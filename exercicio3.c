#include <stdio.h>
#include <stdbool.h>

int main() {
    int numero;
    bool ehPrimo = true;

        printf("Digite um numero: ");
    scanf("%d", &numero);

        if (numero <= 1) {
        ehPrimo = false;
    } else {
                for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                ehPrimo = false;
                break;
            }
        }
    }

        if (ehPrimo) {
        printf("O numero %d é primo.\n", numero);
    } else {
        printf("O numero %d não é primo.\n", numero);
    }

    return 0;
}
