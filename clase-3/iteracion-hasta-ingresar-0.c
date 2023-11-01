#include <stdio.h>

int main() {
    int numero, suma = 0;

    printf("Ingrese numeros (0 para finalizar):\n");

    while (1) {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Salir del bucle si se ingresa 0
        }

        suma += numero; // Sumar el número al total
    }

    printf("La suma total de los numeros ingresados es: %d\n", suma);

    return 0;
}
