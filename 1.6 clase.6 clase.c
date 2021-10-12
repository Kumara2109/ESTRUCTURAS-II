#include <stdio.h>

//Definicion de constantes -constantes simbolicas
#define ENTERA 10
#define CARACTER 'A'
#define FLOTANTE 1.1
#define FLOTANTE2 678.9076
#define FLOTANTE3 0.6E6 // 0.6x10^6                   CONSTANTES NO LLEVAN ;
#define FLOTANTE4 0.6E-6 // 0.6X10^-6
#define CADENA "ESTRUCTURA DE DATOS"

int main()
{
     printf("%d\n", ENTERA);
     printf("%c\n", CARACTER);
     printf("%f\n", FLOTANTE);
     printf("%f\n", FLOTANTE2);
     printf("%f\n", FLOTANTE3);
     printf("%f\n", FLOTANTE4);
     printf("%s\n", CADENA);

     return 0;

}