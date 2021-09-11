/*
 ============================================================================
 Name        : Tp_Laboratorio_1.c
 Author      : Edgar Luna
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <Funciones.h>

int main(void) {
	int opcion;
	int A, B;
	int resultado, resultado2, resultado3;
	float resultado4;
	long long int resultado5;

	printf("Seleccione una opcion:\n");
	printf("1. Ingresar 1er operando (A=%d)\n", A);
	printf("2. Ingresar 2do operando (B=%d)\n", B);
	printf("3. Calcular todas las operaciones \n");
	printf("4. Informar resultados \n");
	printf("5. Salir \n");

	scanf(" %d", &opcion);

	do{
		switch(opcion)
		{
			case '1':
				printf("Ingrese primer operando \n");
				scanf(" %d", &A);
				break;

			case '2':
				printf("Ingrese segundo operando \n");
				scanf(" %d", &B);
				break;

			case '3':
				resultado=suma(A, B);
				resultado2=resta(A, B);
				resultado4=division(A, B);
				resultado3=multiplicacion(A, B);
				resultado5=factorial(A);
				break;

			case '4':
				printf("\nLa suma de %d + %d es %d \n", A, B, resultado);
				printf("\nLa resta de %d - %d es %d\n", A, B, resultado2);
				printf("\nLa division de %d / %d es %.2f \n", A, B, resultado4);
				printf("\nLa multiplicacion de %d x %d es  %\n", A, B, resultado3 );
				printf("\n El factorial de %d es %d\n", A, resultado5);


		}
	}while(opcion!=5);

	return EXIT_SUCCESS;
}
