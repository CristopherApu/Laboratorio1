// Librerías
#include <stdio.h>

// Variables Globales

// Función main

int main (){
    float radio;
    float perimetro;
    float area;

    printf("ingrese el valor del área de la circunferencia\n");
    scanf("%f", &radio);
    perimetro = radio * 3.16 * 2;
    area = radio * 3.16 * radio;
    printf("El perímetro de la circuenferancia es: %f. Y el área es %f\n", perimetro, area);

    return 0;
}
