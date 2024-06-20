/*
Teoría:

Definición y declaración de arrays unidimensionales.
Inicialización y acceso a elementos de un array.
Introducción a los punteros: declaración, inicialización y uso básico.
Ejemplo práctico: Acceder a elementos de un array usando punteros.


Ejercicio:

Declara un array de enteros de tamaño 5 e inicialízalo con valores del 1 al 5.
Imprime los valores del array usando notación de subíndice.
Imprime los valores del array usando notación de puntero.
*/
#include <stdio.h>

int main() {

    // 1. Declarar e inicializar el array
    int arr[5] = {1, 2, 3, 4, 5};

    // 2. Imprimir valores del array con notacion de subindice
    printf("Valores del array usando notación de subíndice:\n");
    for(int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, arr[i]);
    }

    int *p = arr;
    // 3. Imprimir valores del array con notacion de puntero
    printf("\nValores del array usando notación de puntero:\n");
    for(int i = 0; i < 5; i++) {
        printf("*(array + %d) = %d\n", i, *(arr + i));
    }

    return 0;
}

/*
Explicacion en detalle:

Array como puntero:

En C, el nombre de un array (arr en este caso) es en sí mismo un puntero al primer elemento del array. 
Por lo tanto, arr es equivalente a &arr[0].

Acceso a elementos usando aritmética de punteros:
La expresión arr + i usa la aritmética de punteros. arr es un puntero al primer elemento del array, y 
al sumar i a arr, estamos avanzando i posiciones en el array. Por ejemplo, si arr apunta a arr[0], 
entonces arr + 1 apunta a arr[1], arr + 2 apunta a arr[2], y así sucesivamente.

Vamos a descomponer *(arr + i):

arr es un puntero al primer elemento del array, así que arr es equivalente a &arr[0].
Cuando sumas i a arr, obtienes la dirección del i-ésimo elemento del array: arr + i es equivalente a &arr[i].
*(arr + i) desreferencia esa dirección, obteniendo el valor almacenado allí: *(arr + i) es equivalente a arr[i].
Entonces, si i es 2:

arr + 2 es la dirección del tercer elemento del array (&arr[2]).
*(arr + 2) es el valor en esa dirección, que es 3.
*/