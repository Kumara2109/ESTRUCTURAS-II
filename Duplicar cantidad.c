/*
Objetivo: Duplicar una cantidad
Autor: JC
Fecha: 04/05/21
Nota: La cantidad puede ser +/- sin decimal
*/

#include<stdio.h>

int main()
{
int cant, doble;

printf("Dame la cantidad: ");
scanf("%d", &cant);

doble=cant*2; // cant + cant

printf("El doble de %d es: %d\n",cant, doble);
}
