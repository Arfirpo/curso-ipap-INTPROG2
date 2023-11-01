#include <stdio.h>

// Punto 4: Implementar una función que lea un numero entero por parámetro e informe si es par o impar.
void determinarParOImpar(int numero) {
    // Determinar si es par o impar
    if (numero % 2 == 0) {
        printf("%d es un numero par.\n", numero);
    } else {
        printf("%d es un numero impar.\n", numero);
    }
}

int main() {
    int numero;

    // Leer un numero entero desde teclado
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    // Llamar a la función con el numero ingresado como parámetro
    determinarParOImpar(numero);

    return 0;
}
