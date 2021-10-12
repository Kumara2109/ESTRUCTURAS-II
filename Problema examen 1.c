#include <stdio.h>
#include <math.h>

int main()
{
    int v1, v2;

    printf("Dame un valor: ");
    scanf("%d", &v1);

    printf("Dame otro valor: ");
    scanf("%d", &v2);

    if (v1 % v2 == 0)
    {
        printf("%d es divisible entre %d", v1,v2);
    
        if (v2 % v1 == 0)

            printf("%d es divisible entre %d", v2, v1);

        
            
    
    }
    else 
    printf("%d y %d no se dividen", v1,v2);


    return 0;
}