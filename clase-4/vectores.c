#include <stdio.h>

int main() {
    float vector[10]; // Declarar un vector de números reales de tamaño 10
    float suma = 0;

    // Punto 1a: Cargar el vector con valores desde teclado
    for (int i = 0; i < 10; i++) {
        printf("Ingrese un numero real: ");
        scanf("%f", &vector[i]);
    }

    // Punto 1b: Recorrer el vector e informar la suma de todos los valores
    for (int i = 0; i < 10; i++) {
        suma += vector[i];
    }

    // Punto 1c: Calcular el promedio a partir de la suma
    float promedio = suma / 10;

    printf("Suma de los valores en el vector: %.2f\n", suma);
    printf("Promedio de los valores en el vector: %.2f\n", promedio);

    return 0;
}
