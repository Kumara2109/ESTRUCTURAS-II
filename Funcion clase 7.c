#include <stdio.h>

//FUNCIONES 
// -Pedazo de codigo que realiza alguna operacion 
// -Reutilizables
// -Nos ayudan a no repetir codigo 

void funcionEjemplo(int paramentro);

int main()
{
   int a=10;
    funcionEjemplo(a);

    return 0;
}

void funcionEjemplo(int paramentro)
{
        printf("Parametro: %d", paramentro);
}