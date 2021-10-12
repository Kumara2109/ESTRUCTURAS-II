#include <stdio.h>
#include <math.h>

int main()
{

float operando1, operando2;
int opcion;
float resultado;
int repetir;
int nuevaV1, nuevaV2;
do
{
printf("Dame un numero entero: ");
scanf("%f", &operando1);

printf("Dame otro numero entero: ");
scanf("%f", &operando2);

printf("Operacion que se desea realizar: 1-Suma, 2-Resta, 3-Multiplicacion, 4-Division, 5-Potencia, 6-Modulo o 7-Raiz Cuadrada: ");
scanf("%d", &opcion);

switch (opcion)
{
case 1:
    resultado = operando1 + operando2;
    printf("%.2f + %.2f = %.2f\n", operando1, operando2, resultado);
    break;
case 2:
    resultado = operando1 - operando2;
    printf("%.2f - %.2f = %.2f\n", operando1, operando2, resultado);
    break;
case 3:
    resultado = operando1 * operando2;
    printf("%.2f x %.2f = %.2f\n", operando1, operando2, resultado);
    break;
case 4:
    resultado = operando1 / operando2;
    printf("%.2f / %.2f = %.2f\n", operando1, operando2, resultado);
    break;
case 5:
    resultado = pow(operando1, operando2);
    printf("%.2f ^ %.2f = %.2f\n", operando1, operando2, resultado);
    break;
case 6:
    nuevaV1 = operando1;
    nuevaV2 = operando2;
    resultado = nuevaV1 % nuevaV2;
    printf("%d mod %d = %d\n", nuevaV1, nuevaV2, resultado);
    break;
default:
    resultado = sqrt(operando1);
    printf("La raiz cuadrada del primer numero es: %.2f \n",resultado);
    resultado = sqrt(operando2);
    printf("La raiz cuadrada del segundo  numero es: %.2f \n", resultado);
    break;
}

printf("¿Deseas repetir el programa?: 1-SI o 2-NO\n");
scanf("%d", &repetir);
} while (repetir == 1);



return 0;
}
