#include <stdio.h>

int main()
{

int opcion;

printf("Numero entre 0 y 9 cuyo nombre deseas imprimir: ");
scanf("%d", &opcion);

if(opcion >= 0 && opcion <=9)
{
    switch (opcion)
    {
        case 1:
            printf("UNO");
            break;
        case 2:
            printf("DOS");
            break;
        case 3:
            printf("TRES");
            break;
        case 4:
            printf("CUATRO");
            break;
        case 5:
            printf("CINCO");
            break;
        case 6:
            printf("SEIS");
            break;
        case 7:
            printf("SIETE");
            break;
        case 8:
            printf("OCHO");
            break;
        case 9:
            printf("NUEVE");                    
        default:
            printf("CERO");
            break;
    }
}

else
{
    if(opcion < 0)
    {
        printf("El valor es menor que 0");
    }
    else
    {
        printf("El valor es mayor que 9");
    
    }
}

    return 0;
}