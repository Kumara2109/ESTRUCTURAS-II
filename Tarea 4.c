#include <stdio.h>
#include <math.h>

int main()
{

int operando1, operando2;
int opcion;
int resultado;
int repetir; 
do
{
printf("Dame un numero entero: ");
scanf("%d", &operando1);

printf("Dame otro numero entero: ");
scanf("%d", &operando2);

printf("Operacion que se desea realizar: 1-Suma, 2-Resta, 3-Multiplicacion, 4-Division, 5-Potencia, 6-Modulo o 7-Raiz Cuadrada: ");
scanf("%d", &opcion);

switch (opcion)
{
case 1:
    resultado = operando1 + operando2;
    printf("%d + %d = %d\n", operando1, operando2, resultado);
    break;
case 2:
    resultado = operando1 - operando2;
    printf("%d - %d = %d\n", operando1, operando2, resultado);
    break;
case 3:
    resultado = operando1 * operando2;
    printf("%d x %d = %d\n", operando1, operando2, resultado);
    break;
case 4:
    resultado = operando1 / operando2;
    printf("%d / %d = %d\n", operando1, operando2, resultado);
    break;
case 5:
    resultado = pow(operando1, operando2);
    printf("%d ^ %d = %d\n", operando1, operando2, resultado);
    break;
case 6:
    resultado = operando1 % operando2;
    printf("%d mod %d = %d\n", operando1, operando2, resultado);
    break;                
default:
    resultado = sqrt(operando1);
    printf("La raiz cuadrada del primer numero es: %d \n",resultado);
    resultado = sqrt(operando2);
    printf("La raiz cuadrada del segundo  numero es: %d \n", resultado);
    break;
}

printf("¿Deseas repetir el programa?: 1-SI o 2-NO\n");
scanf("%d", &repetir);
} while (repetir == 1);



return 0;
}