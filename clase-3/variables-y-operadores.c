#include <stdio.h>
#include <stdlib.h>

int main() {
    // Punto 2a: Declarar y asignar un valor caracter
    char caracter1 = 'A';

    // Punto 2b: Declarar una segunda variable caracter
    char caracter2;

    // Punto 2c: Asignar el contenido de la primera variable a la segunda
    caracter2 = caracter1;

    // Punto 3a: Declarar una variable entera y asignarle un valor numérico
    int entero = 5;

    // Punto 3b: Multiplicar por 2 el valor contenido en la variable
    entero = entero * 2;

    // Punto 4: Declarar 2 variables de tipo real y realizar una suma
    float real1 = 7.5;
    float real2 = 10.99;
    float suma = real1 + real2;

    // Punto 6: Mostrar resultados en pantalla
    printf("Caracter 1: %c\n", caracter1);
    printf("Caracter 2: %c\n", caracter2);
    printf("Entero: %d\n", entero);
    printf("Suma de reales: %.2f\n", suma);

    return 0;
}
