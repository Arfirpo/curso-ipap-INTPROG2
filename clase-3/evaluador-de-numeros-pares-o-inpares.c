#include <stdio.h>

int main() {
    int numero;

    // Punto 9: Leer un número entero desde teclado
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    // Comprobar si es par o impar
    if (numero % 2 == 0) {
        printf("Es un numero par.\n");
    } else {
        printf("Es un numero impar.\n");
    }

    return 0;
}
