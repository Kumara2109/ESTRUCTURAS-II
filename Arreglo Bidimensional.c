#include <stdio.h>

#define SIZE 5
#define RENGLON 2
#define COLUMNA 5

int main()
{
    int arreglo[SIZE];
    int matriz[RENGLON][COLUMNA];

    matriz[0][0] = 10;
    matriz[1][0] = 11;

    for (int r = 0; r < RENGLON; r++)
    {
        for (int c = 0; c < COLUMNA; c++)
        {
            printf("Dame el elemento de la posicion [%d] [%d]", r, c);
            scanf("%d", &matriz[r][c]);
        }
        
    }
    

    return 0;
}