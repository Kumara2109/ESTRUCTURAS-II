/*
Objetivo: Generar los primeros n terminos impares de la serie de los naturales
Autor: JC
Fecha: 07/05/21
Nota:  1 5 7 9 11 13 15 ... n
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
    serie=cont1+(cont1-1);
    printf("%d ", serie);
}


 printf("\n");
}
