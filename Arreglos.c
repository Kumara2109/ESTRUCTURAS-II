#include <stdio.h>

int main ()
{
    //Arreglos: Estrutura de datos que permite contener diferentes localidades de memoria al mismo tiempo bajo una variable

    int Arreglo[10]; //Direccion donde empiezan los 10 enteros que pedi
    int i;

    for ( i = 0; i < 10; i++)
    {
        Arreglo[i] = i * 10;
    }
    

    printf("HolaMundo");

    return 0;
}