// Librería
#include <stdio.h>

// Variables Globales

// Función main

int main (){
	int caracter1;
	int respuesta;
	
	printf("Ingrese un código desde el 00 al 255 para traducir a través de la tabla ASCII\n");
	scanf("%d", &caracter1);
	respuesta = caracter1;
	printf("El número ingresado es igual al carácter: %c\n", respuesta);
	return 0;
}
