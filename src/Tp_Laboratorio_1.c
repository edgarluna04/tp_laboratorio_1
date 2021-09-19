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
#include "Funciones.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	int A, B;
	int resultado, resultado2, resultado3;
	float resultado4;
	long long int resultado5, resultado6;



	do{
		printf("Seleccione una opcion:\n "
		"1. Ingresar 1er operando (A)\n "
		"2. Ingresar 2do operando (B)\n "
		"3. Calcular todas las operaciones\n"
		"4. Informar resultados \n "
		"5. Salir \n");

		fflush(stdin);
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
				printf("Ingrese primer operando \n");
				scanf("%d", &A);
				break;

			case 2:
				printf("Ingrese segundo operando \n");
				scanf("%d", &B);
				break;

			case 3:
				resultado=suma(A, B);
				resultado2=resta(A, B);
				resultado4=division(A, B);
				resultado3=multiplicacion(A, B);
				resultado5=factorial(A);
				resultado6=factorial(B);
				break;

			case 4:
				printf("\nLa suma de %d + %d es %d \n", A, B, resultado);
				printf("\nLa resta de %d - %d es %d\n", A, B, resultado2);
				if(B==0){
					printf("\n No se puede dividir por cero\n");
				}
				else{
					printf("\nLa division de %d / %d es %.2f \n", A, B, resultado4);
				}
				printf("\nLa multiplicacion de %d x %d es  %d \n", A, B, resultado3 );
				printf("\n El factorial de %d es %lld\n", A, resultado5);
				printf("\n El factorial de %d es %lld\n", B, resultado6);


		}
	}while(opcion!=5);

	return EXIT_SUCCESS;
}
