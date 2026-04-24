//Escriba un programa que lea los valores de todos los elementos de dos vectores de enteros introducidos por el usuario, 
copie esos dos vectores en un tercero (uno a continuación del otro) y muestre sus valores por pantalla. 
Los tamaños de los dos vectores deben declararse como constantes.

#include <stdio.h>
#define TAMAÑO1 5
#define TAMAÑO2 10
int main() 
{
    int vector1 [TAMAÑO1];
    int vector2 [TAMAÑO2];
    int indice=0;
    int numElementos=0;
    printf("\nEscribe un numero entre 1 y 5 para definir el tamaño del vector 1\n");
    scanf("%d",&numElementos);
    if ((numElementos>=1) && (numElementos<=5))
    {
        for (indice = 0 ; indice <= numElementos-1 ; indice++)
        {
            printf("\nDigite un valor entero para el elemento %d del vector 1\n", indice);
            scanf("%d", &vector1[indice]);
        }
    }
        else printf("\nEl numero dado no es válido");
        
    printf("\nEscribe un numero entre 1 y 10 para definir el tamaño del vector 2\n");
    scanf("%d",&numElementos);
    if((numElementos>=1) && (numElementos<=10))
    {
        for (indice = 0 ; indice <= numElementos-1 ; indice++)
        {
            printf("\nDigite un valor entero para el elemento %d del vector 2\n", indice);
            scanf("%d", &vector2[indice]);
        }
    }
        else printf("\nEl numero dado no es válido");

    return 0;
}
