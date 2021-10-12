/*
Objetivo: calcular la suma de los primeros n terminos de la serie de los naturales
Autor: JC
Fecha: 07/05/21
Nota:  1 + 2 + 3 + 4 + 5 + 6 + 7 + ... + n
         (cont1)
*/

#include <stdio.h>

int main()
{
 int cont1,n, suma=0;

 printf("Dame el numero de terminos a sumar: ");
 scanf("%d", &n);

for(cont1=1; cont1<=n; cont1++)
 suma+= cont1;

printf("La suma de los primeros %d terminos es: %d", n, suma);
printf("\n");
}
