#include <stdio.h>

#define N 10

void  leeArreglo(int arr[N]);

int main()
{   
    int arreglo [N];

    leeArreglo(arreglo);
    ordenacionInsercion(arreglo); //Llamada de la funcion

    
    








    return 0;
}

void ordenacionInsercion (int arr[N])
{
    int actual;
    int aux;

    for ( actual = 1; actual < N; actual++)
    {
        if (arr[actual] < arr[actual - 1])
        {
            //Intercambio
            aux = arr[actual];
            arr[actual] = arr[actual - 1];
            arr[actual - 1] = aux;

        }
    }
    


}

void leeArreglo(int arr[N])
{

}