#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int comprimento;

        printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

        comprimento = strlen(str);

      printf("String invertida: ");
    for (int i = comprimento - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
