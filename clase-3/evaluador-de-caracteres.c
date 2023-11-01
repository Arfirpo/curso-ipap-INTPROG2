#include <stdio.h>

int main() {
    char caracter;

    // Punto 8: Leer un carácter desde teclado
    printf("Ingrese un caracter: ");
    scanf(" %c", &caracter);

    // Comprobar si es mayúscula, minúscula o ninguna
    if (caracter >= 'A' && caracter <= 'Z') {
        printf("Es una letra mayuscula.\n");
    } else if (caracter >= 'a' && caracter <= 'z') {
        printf("Es una letra minuscula.\n");
    } else {
        printf("No es una letra.\n");
    }

    return 0;
}
