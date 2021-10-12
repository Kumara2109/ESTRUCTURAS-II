// OPERADORES
#include <stdio.h>
 int main()
 {
     /* Operadores Aritmeticos  -BINARIOS
      + --> Suma
      - --> Resta
      * --> Multiplicacion 
      / --> Division
      % o mod --> Modulo: Residuo de la division ENTERA- DATOS ENTEROS
      */
    int a = 10;
    int b = 3;


     printf("Suma: %d + %d = %d\n", a, b, a + b);
     printf("Resta: %d - %d = %d\n", a, b, a - b);
     printf("Multiplicacion: %d * %d = %d\n", a, b, a * b);
     printf("Division: %d / %d = %d\n", a, b, a / b);
     printf("Modulo: %d / %d = %d\n", a, b, a%b);

     float c=10.0, d=3.0;

     printf("Division Flotante %f / %f = %f\n", c, d, c/d);
     //printf("Modulo: %f / %f = %f\n", c, d, c%d);     // CUANDO SACAS MODULO DEBE SER CON VALORES INT 


     return 0;
     
 }