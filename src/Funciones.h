/*
 * Funciones.h
 *
 *  Created on: 11 sep. 2021
 *      Author: edgar
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include <stdio.h>
#include <stdlib.h>
//#include "Funciones.c"


/// \fn int suma(int,)
/// \brief
/// Suma dos numeros y retorna el resultado
/// \param num1
/// \param num2
/// \return resultado de la suma
int suma(int num1, int num2);

/// \fn int resta(int,)
/// \brief
/// Resta dos numeros y retorna el resultado
/// \param num1
/// \param num2
/// \return resultado de la resta
int resta(int num1, int num2);

/// \fn float division(int,)
/// \brief
/// Divide el primer parametro por el segundo
/// \param num1
/// \param num2
/// \return resultado de la division
float division(int num1, int num2);

/// \fn int multiplicacion(int,)
/// \brief
/// multiplica los parametros ingresados
/// \param num1
/// \param num2
/// \return resultado de la multiplicacion
int multiplicacion(int num1, int num2);

/// \fn long long int factorial(int)
/// \brief
/// calcula el factorial del parametro
/// \param num1
/// \return resultado del factorial
long long int factorial(int num1);

#endif /* FUNCIONES_H_ */
