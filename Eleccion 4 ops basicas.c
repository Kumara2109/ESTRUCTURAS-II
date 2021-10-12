/*
 Objetivo: Realizar a eleccion del usuario una de las 4 ops basicas
 Autor: JC
 Fecha: 06/05/21
 Notas: Las cantidades pueden ser +/- y con decimales
         Las opciones se representaran con enteros
         1-suma, 2-resta, 3-multi, 4-dividir
 */

#include <stdio.h>
#include <math.h>
int main ()
{
 float cant1, cant2, res;
 int op;

 printf("Dame la primera cantidad: ");
 scanf("%f", &cant1);

 printf("Dame la segunda cantidad: ");
 scanf("%f", &cant2);

 printf("Opci\xa2n 1 a 4: ");
 scanf("%d", &op);

 if(op<1 || op>4)
    printf("Opcion no valida");
 else
 {
    switch(op)
    {
    case 1:
        res=cant1+cant2;
        break;
    case 2:
        res=cant1-cant2;
        break;
    case 3:
        res=cant1*cant2;
        break;
    default:
        res=cant1/cant2;
    }
 printf("El resultado de tu operacion es: %.2f ", res);
 }
}
