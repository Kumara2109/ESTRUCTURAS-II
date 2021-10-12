/*
Objetivo: Calcular el porcentaje de una cantidad
Autor: JC
Fecha: 04/05/21
Nota: La cantidades tienen decimales
      Puede ser +/-
*/

#include<stdio.h>

int main()
{
 float cant, por,res;

printf("Dame una cantidad: ");
scanf("%f", &cant);

printf("Dame el porcentaje deseado: ");
scanf("%f", &por);

res=(cant*por)/100;

printf("El %.2f%% de %.2f es: %.2f\n", por, cant, res);
}
