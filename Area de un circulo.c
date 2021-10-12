/*
Objetivo: Calcular el area de un circulo
Autor: JC
Fecha: 04/05/21
Nota: La cantidad puede ser +/-
      Las cantidades tienen decimales
      Usando la formula clasica ac= pi r2
*/

#include <stdio.h>
#include <math.h>

#define PI 3.1416  //Asi se puede definir una variable desde antes del comiezo del programa

int main()
{
 float rad, area;

 printf("Dame el valor del radio: ");
 scanf("%f", &rad);

area= PI* pow(rad,2);
//area= M_PI* pow(rad,2);

 printf("El area del circulo sera: %.2f\n", area);

}

