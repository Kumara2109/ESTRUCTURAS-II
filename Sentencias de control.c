/*
 Objetivo: Encontrar la mayor de 2 cantidades
 Autor: JC
 Fecha: 06/05/21
 Notas: Las cantidades pueden ser +/- y con decimales
 */

#include <stdio.h>

int main ()
{
 float cant1,cant2, mayor, menor;

 printf("Dame la primera cantidad: ");
 scanf("%f", &cant1);

 printf("Dame la segunda cantidad: ");
 scanf("%f", &cant2);

 if(cant1>cant2)
 {
    mayor=cant1;
    menor=cant2;
 }

 else
 {
    mayor=cant2;
    menor=cant1;
 }


 printf("%.2f es mayor que %.2f \n", mayor,menor);
}
