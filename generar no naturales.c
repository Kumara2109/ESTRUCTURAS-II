/*
Objetivo: Generar los primeros n terminos de la serie de los naturales
Autor: JC
Fecha: 07/05/21
Nota: 1 2 3 4 5 6 7 ... n
         (cont)
*/

#include <stdio.h>

int main()
{
 int cont1,n;

 printf("Dame el numero de terminos a escribir: ");
 scanf("%d", &n);

for(cont1=1; cont1<=n; cont1++)
    printf("%d ", cont1);

 printf("\n");
}

