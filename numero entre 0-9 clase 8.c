//CONDICIONALES
#include<stdio.h>

/*ESTRUCTURAS DE CONTROL
-Condicionales o Seleccion
-Repeticion
*/

//-Si el numero del ususario es mayor que 9 entonces decirle que es incorrecto y que es mas grande que 9
//-Si el numero del usuario esta entre el rango indicado entonces imprimir el nombre del numero
int main()
{
    int num;

    printf("Dame un numero entre el 0 y 9: ");
    scanf("%d", &num);

    if(num <= 9 && num >= 0)
    {
        if(num ==0)

        printf("Cero");

        else if(num ==1)
            printf("Uno");
        else if(num ==2)
            printf("Dos");
        else if(num ==3)
            printf("Tres");
        else if(num ==4)
            printf("Cuatro");       
        else if(num ==5)
            printf("Cinco");
        else if(num ==6)
            printf("Seis");
        else if(num ==7)
            printf("Siete");
        else if(num ==8)
            printf("Ocho");
        else if(num ==9)
            printf("Nueve");
                  
    }

    else
    {
        printf("Su numero es negativo o mayor que 9");
    }

    return 0;
}

