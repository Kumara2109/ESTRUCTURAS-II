/*
Objetivo: Calcular la hipotenusa de un triangulo
Autor: JC
Fecha: 04/05/21
Nota: La cantidad puede ser +/-
      Las cantidades tienen decimales
      Usando Pitagoras
*/

#include <stdio.h>
#include <math.h>
 int main()
 {
 float cateto1,cateto2, hip;

 printf("Dame el valor del cateto1: ");
 scanf("%f", &cateto1);

 printf("Dame el valor del cateto2: ");
 scanf("%f", &cateto2);

hip= sqrt( pow(cateto1,2) + pow(cateto2,2)); // hip=sqrt(cateto1*cateto1 + cateto2*cateto2);

 printf("La hipotenusa tiene un valor de: %.2f\n", hip);
 }
