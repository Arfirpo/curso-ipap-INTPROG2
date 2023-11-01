#include <stdio.h>

// Punto 3: Implementar una función que lea un numero entero de teclado e informe si es par o impar.
void determinarParOImpar() {
    int numero;

    // Leer un numero entero desde teclado
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    // Determinar si es par o impar
    if (numero % 2 == 0) {
        printf("%d es un numero par.\n", numero);
    } else {
        printf("%d es un numero impar.\n", numero);
    }
}

int main() {
    // Llamar a la función para determinar si un numero es par o impar
    determinarParOImpar();

    return 0;
}
