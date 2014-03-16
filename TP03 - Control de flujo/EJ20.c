//
//  Ej 20.c
//  Programacion Imperativa
//
//  Created by Juan Moreno on 3/10/14.
//  Copyright (c) 2014 Juan Moreno. All rights reserved.
//

/* Ejercicio 20
Escribir un programa (en no más de 10 líneas) que calcule el valor de la 
constante matemática e utilizando la fórmula e = 1 + 1/1! + 1/2! + 1/3! +... e 
imprima una tabla que indique cantidad de términos de la serie y el resultado parcial, 
con el siguiente formato:
¿Qué criterio utilizaría para detener la secuencia? ( No usar cantidad fija de 
términos ni preguntarle al usuario la cantidad de términos. Tampoco tendría sentido 
comparar con el verdadero valor de e).
*/

#include <stdio.h>
#include "getnum.h"

int main(void) {
	int termino = 1, i;
	long int factorial = 1;
	double e = 1;
	printf("N\te\n");
	printf("%d\t%f\n", termino, e);
	for(termino = 2;termino<=10;termino++){
		for(i = 1;i < termino;i++){
			factorial *= (termino - i);
		}
		printf("Numero: %d, Factorial %ld\n", termino, factorial);
		e+=(1 / (double) factorial);
		printf("%d\t%f\n", termino, e);
	}
}