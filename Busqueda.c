#include <stdio.h>

 //Busqueda en arreglo 
    //Encontrar un dato dentro del arreglo

    //Existen diferentes algoritmos:
    //Busqueda secuencial:
    //      -Recorrer el elemento "a" dentro del arreglo 
    //      comparando el elemento con el dato que queremos buscar 
    //      mientras no nos pasemos del tamaño del arreglo

    /* Escribir un programa que lea un arreglo unidimensional de tamaño N,
        pida un numero al usuario y busque ese numero dentro del arreglo.
        El programa debe imprimir la posicion del numero que busco si es que lo encontro.
        Sino lo no encontro escribir que no existe ese valor.

        Funcion que reciba el arreglo y el numero a busacar y regrese la posicion en donde lo encontro.
        Sino lo encuentra regresar -1.

        La funcion no debe imprimir nada 
        La impresion es en el main
    */

#define N 10

int buscador(int arreglo[N], int b );

int main()
{
    int arreglo [N];
    int b, pos;

    for (int i = 0; i < N; i++)
    {
        printf("Dame un valor del arreglo para la posicion [%d]: ", i);
        scanf("%d", &arreglo[i]);
    }

    printf("Dame un numero que quieras buscar: ");
    scanf("%d", &b);

    pos = buscador(arreglo, b);

    if(pos != -1)
    {
        printf("El valor %d se encuentra en la posicion: [%d] ", b, pos);
    }
    else
    {
        printf("El valor no existe en este arreglo");
    }

    return 0;
}

int buscador(int arreglo[N], int b ) //Funcion regresa entero por eso es de tipo int
{
    int pos = -1;

    for ( int i = 0; i < N; i++)
    {
        if (arreglo[i] == b)
        {
            pos = i;
        }
    }
    

    return pos;
}