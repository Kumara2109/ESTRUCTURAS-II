//CONDICIONALES
#include<stdio.h>

/*ESTRUCTURAS DE CONTROL
-Condicionales o Seleccion
-Repeticion
*/

int main()
{
    int num=0;
    printf("Dame un valor: ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("El numero %d es par", num);
    }
    else //Si no se cumple la condicion del "IF" entonces el programa hara esto
    {
        printf("El numero %d es impar", num);
    }
    
    return 0;

}