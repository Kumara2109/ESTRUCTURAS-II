//CONDICIONALES
#include<stdio.h>

/*ESTRUCTURAS DE CONTROL
-Condicionales o Seleccion
-Repeticion
*/

int main()
{
    int magic=560, jugador;

    printf("Adivina el num que estoy pensando");
    scanf("%d", &jugador);

    if(jugador == magic)
    {
        printf("ADIVINASTE");
    }
    
    else if(jugador < magic)
    {
        printf("Tu numero es menor we");

    }
    
    else
    {
        printf("Tu numero es mayor we");
    }

    return 0;

}