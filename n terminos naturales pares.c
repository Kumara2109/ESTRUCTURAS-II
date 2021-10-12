/*
Objetivo: Generar los primeros n terminos pares de la serie de los naturales
Autor: JC
Fecha: 07/05/21
Nota:  2 4 6 8 10 12 14 ... n
         (cont)
*/

#include <stdio.h>

int main()
{
 int cont1,n, serie;

 printf("Dame el numero de terminos a escribir: ");
 scanf("%d", &n);

for(cont1=1; cont1<=n; cont1++)
{
    serie=cont1*2;
    printf("%d ", serie);
}


 printf("\n");
}
