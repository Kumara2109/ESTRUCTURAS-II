#include <stdio.h>

//Capturar los nombres de los alumnos de una materia
//Captura las calificaciones de cada parcial de cada alumno 
//Supongamos:
//            -No. de alumnos es 5
//            -No. de parciales de la materia son 4

// 1. Que informacion necesito y de donde la voy a obtener 
//     -Declarar variables
//     -Solicitar al usuario 

int main()
{
    char nom[5][20];
    int i;
    float cal[5][4];
    int parcial;

    for  (i = 0; i < 5; i++)
    {
        printf("Dame el nombre de la posicion %d: ", i);
        scanf("%s", nom[i]);

        for ( parcial = 0; parcial < 4; parcial++)
        {
            printf("Dame la califiacion del parcial %d: ", parcial + 1);
            scanf("%f", &cal[i][parcial]);
        }
    }

    

    

    return 0;

}