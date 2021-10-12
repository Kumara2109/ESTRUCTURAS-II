#include <stdio.h>

#define N 10

void leeArreglo(int arr[N]);
int pedirBuscar();
int buscador(int Ar[N], int num );

int main()
{
    int arreglo[N];
    int b;
    int respuesta;

    leeArreglo(arreglo);
    b = pedirBuscar();

    respuesta = buscador(arreglo, b);



    return 0;
}

int buscador(int Ar[N], int num )
{
    int pos;

    pos = -1;

    for (int i = 0; i < N; i++)
    {
        if (num == i)
        {
            pos = Ar[i];
        }
    }
    
    return pos;
}



int pedirBuscar()
{
    int num;

    printf("Dame el numero que quieres buscar: ");
    scanf("%d", &num);

    return num;

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