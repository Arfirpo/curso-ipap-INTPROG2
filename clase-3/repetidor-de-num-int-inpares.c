#include <stdio.h>

int main() {
    // Punto 11: Imprimir números enteros impares del 1 al 20
    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
