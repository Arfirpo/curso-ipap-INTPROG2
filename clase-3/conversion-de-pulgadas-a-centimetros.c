#include <stdio.h>

int main() {
    float pulgadas, centimetros;

    // Punto 7: Leer una medida en pulgadas y convertirla a centímetros
    printf("Ingrese una medida en pulgadas: ");
    scanf("%f", &pulgadas);
    
    centimetros = pulgadas * 2.54;
    
    printf("Equivalente en centímetros: %.2f\n", centimetros);

    return 0;
}