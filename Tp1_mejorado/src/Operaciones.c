/*
 * Operaciones.c
 *
 *  Created on: 9 abr. 2021
 *      Author: Santiago
 */
#include "Operaciones.h"


int ValidarNumeroFloat(char* pData){
	int contadorComa = 0;
	int rtn = 1;

	if(strlen(pData) > 0){
		if (pData[0] == '-'){
			for(int i = 1; i < strlen(pData); i++){
				if(pData[i]=='.' || pData[i]==','){
					if(isdigit(pData[i+1]) == 0){
					contadorComa++;
					rtn = 0;
					break;
					}
				}
			}
		}
		else{
			for(int i = 0; i < strlen(pData); i++){

				if(pData[i] == '.'|| pData[i] == ','){
				contadorComa++;
			}
			else{
				if(isdigit(pData[i]) == 0){
					rtn = 0;
					break;
				}
			}
		}

		if(contadorComa > 1){
			rtn = 0;
			}
		}

	}else{
		rtn = 0;
	}

	return rtn;
}

float PedirFloat(char* MSJ, char* ERROR_MSJ){
	char buffer[TAM_BUFFER];
	float rtn;

	printf("%s", MSJ);
	fflush(stdin);
	gets(buffer);

	while(ValidarNumeroFloat(buffer) == 0){
		printf("%s", ERROR_MSJ);
		fflush(stdin);
		gets(buffer);
	}
	rtn = atof(buffer);

	return rtn;
}

void MostrarNumero(int numeroIngresado){

	printf("El numero ingresado es: %d\n", numeroIngresado);
}

float SumarOperadores(float x , float y){

	float sumar;

	sumar = x + y;

	return sumar;

}

float RestarOperadores (float x, float y){
	float restar;

	restar = x - y;

	return restar;
}

float DividirOperadores(float x, float y){
	float dividir;

	if (y!=0){
		 dividir = x / y;
	}
	else{
		dividir = 0;
	}
	return dividir;
}

float MultiplicarOperadores(float x, float y){
	float multiplicar;

	multiplicar = x * y;

	return multiplicar;
}

int ValidarEntero(float x){

	int entero;
	int aux;

	aux = (int) x;

	if(x == aux && x >= 0){
		entero = 1;
	}
	else {
		entero = 0;
	}

	return entero;
}

int CalcularFactorial(int x){

	int i;
	int factorial;

	factorial = 1;

	for(i=1; i<=x; i++){

		factorial *= i;
	}

	return factorial;
}
