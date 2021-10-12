#include <stdio.h>

int main()
{

int operando1, operando2;
int opcion;
int resultado;

printf("Dame un numero entero: ");
scanf("%d", &operando1);

printf("Dame otro numero entero: ");
scanf("%d", &operando2);

printf("Operacion que se desea realizar: 1-Suma o 2-Resta: ");
scanf("%d", &opcion);

//Valores definidos u opciones
switch (opcion)
{
case 1:
    resultado = operando1 + operando2;
    printf("El resultado es: %d", resultado);
    break;
case 2:
    resultado = operando1 - operando2;
    printf("El resultado es: %d", resultado);
    break;
default:
    printf("La opcion es incorrecta y no pertenece a ninguna operacion");
    break;
}

    return 0;
}