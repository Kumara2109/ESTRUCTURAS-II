#include <stdio.h>

void grados(float *x, float y);

int main()
{
 float F;
 int C;

 printf("Dame una temperatura en Celsius: ");
 scanf("%d", &C);

 grados(&F, C);

 printf("Tu valor en grados Farenheit es: %.2f", F);

 return 0;

}

void grados(float *x, float y)
{
    *x= 1.8 * y + 32;
}

