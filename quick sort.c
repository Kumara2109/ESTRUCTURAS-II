#include <stdio.h>

#define N 10

void quicksort(int arr[N], int izq, int der);
void imprimeArreglo(int arr[N]);

int main()
{
    int arreglo[N] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    quicksort(arreglo, 0, N-1);

    imprimeArreglo(arreglo);

    return 0;
}

void quicksort(int arr[N], int izq, int der)
{
    //Dividir el arreglo
    //Seleccionar el pivote 
    //Recorrer derecha hasta encontrar un valor menor al pivote o nos encontremos con pivote o izq -decrementar der
    //Recorrer izq hasta encontrar un valor mayor al pivote o nos encontremos con pivote o der -incrementar izq

    int pivote = izq; //inicializar pivote en el indice del inicio del arreglo
    int aux;
    int inicio = izq;
    int fin = der;

    if( inicio >= fin)

    while(der > izq)
    {

        while(der > pivote && arr[der] >= arr[pivote])
        {
            der --;
        }

        if (arr[der] < arr[pivote])
        {
            aux = arr[der];
            arr[der] = arr[pivote];
            arr[pivote] = aux;

            pivote = der;
        }

        while (izq < pivote && arr[izq < pivote])
        {
            izq ++;
        }

        if (arr[izq] > arr[pivote])
        {
            aux = arr[izq];
            arr[izq] = arr[pivote];
            arr[pivote] = aux;

            pivote = izq;
        }
    
    }


    quicksort(arr, inicio, pivote - 1);
    quicksort(arr, pivote + 1, fin);
    



}

void imprimeArreglo(int arr[N])
{
    printf("[");
    for (int i = 0; i < N; i++)
    {
        printf("%d", arr[i]);
    }
    printf("]");
    
}