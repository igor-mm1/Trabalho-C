#include <stdio.h>


int calcularFatorial(int n) {
    int fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int numero;

    
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero);

   
    if (numero < 0) {
        printf("Fatorial não está definido para números negativos.\n");
    } else {
        
        int resultado = calcularFatorial(numero);
        printf("O fatorial de %d é: %d\n", numero, resultado);
    }

    return 0;
}
