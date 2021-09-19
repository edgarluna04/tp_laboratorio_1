/*
 * Funciones.c
 *
 *  Created on: 11 sep. 2021
 *      Author: edgar
 */

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int suma(int num1, int num2)
{
	int resultado;
	resultado=num1+num2;

	return resultado;
}


int resta(int num1, int num2)
{
	int resultado;
	resultado=num1-num2;

	return resultado;
}


float division(int num1, int num2)
{
	float resultado;
	resultado= (float)num1/num2;

	return resultado;
}


int multiplicacion(int num1, int num2)
{
	int resultado;
	resultado=num1*num2;

	return resultado;
}

long long int factorial(int num1){

	long long int resultado=1;

	for(int i=1; i<=num1; i++)
		resultado*=i;

	return resultado;
}
