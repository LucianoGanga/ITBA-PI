//
//  Ej 18.c
//  Programacion Imperativa
//
//  Created by Juan Moreno on 3/10/14.
//  Copyright (c) 2014 Juan Moreno. All rights reserved.
//

/* Ejercicio 18
Escriba un programa que lea un entero no negativo ( cero o mayor ) 
y que calcule e imprima su factorial. En caso de ingresar un valor inválido, 
imprimir un cartel aclarando cuáles son los valores válidos. (En no más de 10 líneas)
*/

#include <stdio.h>
#include "getnum.h"

int main(void) {
	int numero, i;
	long int factorial = 1;
	numero = getint("Introducir un numero positivo: ");
	if(numero >= 0){
		for(i = 0;i < numero;i++){
			factorial *= (numero - i);
		}
		printf("Su factorial es: %ld\n", factorial);
	} else {
		printf("Valor invalido.\n");
	}
}

/*int main(void) {
	int i, n, lim;
	long int factorial = 1;
	lim = getint("Hasta que numero?: ");
	for(n=1;n<=lim;n++){	
		for(i = 0;i < n;i++){
			factorial *= (n - i);
		}
		printf("Numero: %d, su factorial es: %ld\n", n, factorial);
		factorial = 1;
	}
}*/