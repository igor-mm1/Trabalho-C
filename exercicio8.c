#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem na ordem errada
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;

    // Solicita ao usuário para inserir o tamanho do array
    printf("Digite o numero de elementos no array: ");
    scanf("%d", &n);

    int arr[n];

    // Solicita ao usuário para inserir os elementos do array
    printf("Digite os elementos do array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Chama a função bubbleSort para ordenar o array
    bubbleSort(arr, n);

    // Exibe o array ordenado
    printf("Array ordenado em ordem crescente:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
