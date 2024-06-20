#include <stdio.h>

// Definir una macro para calcular el cuadrado de un número
#define SQUARE(x) ((x) * (x))

// Definir una macro para intercambiar dos variables
#define SWAP(a, b) do { int temp = (a); (a) = (b); (b) = temp; } while (0)
// La macro SWAP(a, b) se define para intercambiar los valores de a y b. Utiliza una variable temporal temp para realizar el intercambio.

int main() {
    // Calcular y mostrar el cuadrado de varios números
    int num1 = 3;
    int num2 = 5;
    int num3 = 7;

    printf("El cuadrado de %d es %d\n", num1, SQUARE(num1));
    printf("El cuadrado de %d es %d\n", num2, SQUARE(num2));
    printf("El cuadrado de %d es %d\n", num3, SQUARE(num3));

    int x = 10;
    int y = 20;

    printf("Antes del intercambio: x = %d, y = %d\n", x, y);

    // Usar la macro para intercambiar x e y
    SWAP(x, y);

    printf("Después del intercambio: x = %d, y = %d\n", x, y);

    return 0;
}
