#include <stdio.h>
#include <string.h>

int main() {
    // Declarar cadenas de caracteres
    char str1[50] = "Hola, ";
    char str2[50] = "Mundo!";
    char str3[50];
    char str4[50] = "Hola, Mundo!";
    
    // 1. Copiar una cadena a otra usando strcpy
    strcpy(str3, str1);
    printf("Copiar str1 a str3 usando strcpy:\nstr3 = %s\n", str3);
    
    // 2. Calcular la longitud de una cadena usando strlen
    size_t length = strlen(str1);
    printf("Longitud de str1 usando strlen:\nlength = %zu\n", length);
    
    // 3. Concatenar dos cadenas usando strcat
    strcat(str1, str2);
    printf("Concatenar str2 a str1 usando strcat:\nstr1 = %s\n", str1);
    
    // 4. Comparar dos cadenas usando strcmp
    int comparison = strcmp(str1, str4);
    if (comparison == 0) {
        printf("Las cadenas str1 y str4 son iguales.\n");
    } else if (comparison < 0) {
        printf("La cadena str1 es menor que la cadena str4.\n");
    } else {
        printf("La cadena str1 es mayor que la cadena str4.\n");
    }

    return 0;
}
