#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário para inserir um número
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Imprime a tabela de multiplicação de 1 a 10
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
