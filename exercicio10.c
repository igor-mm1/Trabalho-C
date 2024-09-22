#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, contadorVogais = 0;

        printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

        str[strcspn(str, "\n")] = '\0';

        for (i = 0; str[i] != '\0'; i++) {
        
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            contadorVogais++;
        }
    }

        printf("O numero de vogais na string é: %d\n", contadorVogais);

    return 0;
}
