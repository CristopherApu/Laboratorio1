// Librerías
#include <stdio.h>

// Variables Globales

// Función main

int main(){
    int numero1;
    int numero2;
    int suma;

    printf("ingrese el primer número\n");
    scanf("%d", &numero1);
    printf("ingrese el segundo número\n");
    scanf("%d", &numero2);
    suma = numero1 + numero2;
    printf("el resultado de la suma es: %d\n", suma);

    return 0;
}
