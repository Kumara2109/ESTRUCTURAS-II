#include <stdio.h>


#define N 3
#define M 4

void leeArreglo(int arr[N]);
void seleccOrde(int arr[N]);

int main()
{
    int arreglo[N];

    leeArreglo(arreglo);
    seleccOrde(arreglo);



    return 0;
}

void seleccOrde(int arr[N])
{
    int actual, comparador, aux;

    for ( actual = 0; actual < N-1; actual++)
    {
        for ( comparador = 1; comparador < N; comparador++)
        {
            if (arr[comparador] > arr[actual])
            {
               aux = arr[actual];
               arr[actual] = arr[comparador];
               arr[comparador] = aux;
            }
            
        }
        
    }
    
}

void leeArreglo(int arr[N])
{
    int i;

    for ( i = 0; i < N; i++)
    {
        printf("Dame el valor de cada casilla: ");
        scanf("%d", &arr[i]);


    }
    
}