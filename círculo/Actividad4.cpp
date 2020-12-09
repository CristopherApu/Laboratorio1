// Librerías
#include <stdio.h>

// Variables Globales

// Función main

int main (){
    float numero1;
    float numero2;
    float producto;

    printf("ingrese el primer número\n");
    scanf("%f", &numero1);
    printf("ingrese el segundo número\n");
    scanf("%f", &numero2);
    producto = numero1 * numero2;
    printf("E  producto de ambos números es: %f\n", producto);

    return 0;
}
