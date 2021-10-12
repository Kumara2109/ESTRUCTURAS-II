#include <stdio.h>

void cicloFor(int *N1, int *N2);

int main()
{
    int V1, V2;

    printf("Dame un numero: ");
    scanf("%d", &V1);

    printf("Dame un segundo numero: ");
    scanf("%d", &V2);

    cicloFor ();




    return 0;

}

void cicloFor(int *N1, int *N2)
{


    for ( i = *N1; i == *N2; i++)
    {
        printf("%d\n", i);
    }

    
}
