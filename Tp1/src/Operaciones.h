/*
 * Operaciones.h
 *
 *  Created on: 9 abr. 2021
 *      Author: Santiago
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#ifndef OPERACIONES_H_
#define OPERACIONES_H_
#define TAM_BUFFER 1000

int ValidarNumeroFloat(char* pData);

float PedirFloat(char* MSJ, char* ERROR_MSJ);

void MostrarNumero(int numeroIngresado);

float SumarOperadores(float x , float y);

float RestarOperadores (float x, float y);

float DividirOperadores(float x, float y);

float MultiplicarOperadores(float x, float y);

int ValidarEntero(float x);

int CalcularFactorial(int x);

#endif /* OPERACIONES_H_ */
