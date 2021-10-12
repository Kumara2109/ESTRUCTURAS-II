#include <stdio.h>

// Recursividad: Una funcion puede llamrse a si  misma
// -Caso base: Uno o mas, la opcion que nos indica que ya no hay que dar vueltas o 
//             llamar de nuevo a la funcion
// -Caso recursivo: 

 void imprimeporCaracterRecursiva(char frase[100], int size, int posActual);

int main()
{
    char frase[100] = "Anita lava la tina";
    int size = strlent(frase);

    imprimeporCaracterRecursiva(frase, size,0);     //Cadena que va a imprimir, tamaño de cadena y caracter actual


    return 0;
}

void imprimeporCaracterRecursiva(char frase[100], int size, int posActual)
{
    if (posActual >=size)
    {
        return;
    }
    else
    {
        printf("%c\n", frase[posActual]);
        imprimeporCaracterRecursiva(frase, size, posActual + 1);
    }
    
}