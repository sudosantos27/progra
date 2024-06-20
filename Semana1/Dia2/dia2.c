/*
Día 2: Aritmética de Punteros y Manejo de Arrays con Diferentes Notaciones

Teoría:

Operadores & (dirección de) y * (contenido apuntado por).
Aritmética de punteros: incremento, decremento, y acceso a elementos.
Comparación entre notación de subíndice y notación de puntero.


Ejercicio:

Crea un programa que declare un array de floats y lo inicialice con algunos valores.
Imprime los valores usando una notación y luego la otra.
Modifica los valores del array usando punteros y vuelve a imprimirlos.
*/

#include <stdio.h>

int main() {
    // 1. Declarar e inicializar el array
    float arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    // Declarar un puntero y asignarle la dirección del primer elemento del array
    float *p = arr;

    // 2. Imprimir los valores del array usando notación de subíndice
    printf("Valores del array usando notación de subíndice:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %.1f\n", i, arr[i]);
    }

    // Imprimir los valores del array usando notación de puntero
    printf("\nValores del array usando notación de puntero:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(p + %d) = %.1f\n", i, *(p + i));
    }

    // 3. Modificar los valores del array usando punteros
    for (int i = 0; i < 5; i++) {
        *(p + i) = *(p + i) * 2; // Duplicar cada valor del array
    }

    // Imprimir los valores modificados del array usando notación de subíndice
    printf("\nValores modificados del array usando notación de subíndice:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %.1f\n", i, arr[i]);
    }

    // Imprimir los valores modificados del array usando notación de puntero
    printf("\nValores modificados del array usando notación de puntero:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(p + %d) = %.1f\n", i, *(p + i));
    }

    return 0;
}


/*
Ventajas de la Notación de Punteros

Eficiencia:

Acceso Directo: La notación de punteros puede ser más eficiente porque accede directamente a la dirección de memoria del elemento. 
En algunos casos, la notación de subíndice puede involucrar un cálculo adicional (como base + index), mientras que con punteros, 
simplemente incrementas la dirección.

Menos Operaciones de Multiplicación: En arrays multidimensionales, la notación de subíndice puede implicar múltiples operaciones 
de multiplicación para calcular la dirección del elemento, mientras que la notación de punteros puede ser más directa.


Flexibilidad:

Iteración Simplificada: La iteración a través de arrays puede ser más natural con punteros. Por ejemplo, para recorrer un array, 
simplemente incrementas el puntero en lugar de tener que mantener un índice.

Manipulación de Memoria: Los punteros permiten una manipulación más directa y flexible de la memoria. Esto es útil en la 
programación de sistemas y en situaciones donde necesitas optimizar el rendimiento.


Compatibilidad con Funciones:

Pasar Arrays a Funciones: Cuando pasas un array a una función, se pasa como un puntero al primer elemento. Trabajar directamente 
con punteros dentro de la función puede hacer el código más claro y evitar la necesidad de mantener múltiples variables de índice.

Manipulación de Datos Complejos: En estructuras de datos complejas como listas enlazadas, árboles y gráficos, los punteros son 
esenciales para la navegación y manipulación.
*/