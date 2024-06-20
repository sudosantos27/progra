#include <stdio.h>

int main() {
    // Declarar cadenas de caracteres
    char str1[50] = "Hola, ";
    char str2[50] = "Mundo!";
    char str3[50];
    char str4[50] = "Hola, Mundo!";
    
    // 1. Copiar una cadena a otra usando strcpy con punteros
    char *p1 = str1;
    char *p3 = str3;
    while ((*p3++ = *p1++)); // Copiar usando punteros
    printf("Copiar str1 a str3 usando punteros:\nstr3 = %s\n", str3);
    
    // 2. Calcular la longitud de una cadena usando strlen con punteros
    p1 = str1;
    int length = 0;
    while (*p1++) length++; // Calcular longitud usando punteros
    printf("Longitud de str1 usando punteros:\nlength = %d\n", length);
    
    // 3. Concatenar dos cadenas usando strcat con punteros
    p1 = str1;
    char *p2 = str2;
    while (*p1) p1++; // Mover p1 al final de str1
    while ((*p1++ = *p2++)); // Concatenar str2 al final de str1
    printf("Concatenar str2 a str1 usando punteros:\nstr1 = %s\n", str1);
    
    // 4. Comparar dos cadenas usando strcmp con punteros
    p1 = str1;
    char *p4 = str4;
    int comparison = 0;
    while (!(comparison = *(unsigned char *)p1 - *(unsigned char *)p4) && *p1 && *p4) {
        p1++;
        p4++;
    }
    if (comparison == 0) {
        printf("Las cadenas str1 y str4 son iguales.\n");
    } else if (comparison < 0) {
        printf("La cadena str1 es menor que la cadena str4.\n");
    } else {
        printf("La cadena str1 es mayor que la cadena str4.\n");
    }

    return 0;
}
