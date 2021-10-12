#include <stdio.h>

/*Ejecicio: Programa que le pida un numero al usuario
imprimir todos los numeros pares desde el 0 hasta el numero
que nos de el usuario
*/

int main()
{
    int numero, i;

    printf("Dame un numero: ");
    scanf("%d", &numero);

    //Elegimos un for porque sabemos cuantas vueltas vamos a dar
    for ( i = 0; i <= numero; i++)
    {
        if (i % 2 == 0) // Es par, si al dividir entre 2 su residuo es 0 
        {
            printf("%d\n", i);
        }
    }
    

    return 0;
}