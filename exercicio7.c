#include <stdio.h>

int main() {
    int numeros[10];
    int maior, menor;

    // Solicita ao usuário para inserir 10 números inteiros
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa o maior e menor valor com o primeiro elemento do array
    maior = menor = numeros[0];

    // Itera através do array para encontrar o maior e o menor valor
    for (int i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    // Exibe o maior e o menor valor
    printf("O maior numero é: %d\n", maior);
    printf("O menor numero é: %d\n", menor);

    return 0;
}
