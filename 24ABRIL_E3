#include <stdio.h>
#define TAMAÑO 5


void main() 
{
    int vector1 [TAMAÑO];
    int vector2 [TAMAÑO];
    int vector3 [2*TAMAÑO];
    int i,j, numElementos;
    
    printf("\nEscribe un numero entre 1 y 5 para definir el tamaño del vector 1\n");
    scanf("%d",&numElementos);
    if ((numElementos>=1) && (numElementos<=5))
    {
        for (i = 0 ; i <= numElementos-1 ; i++)
        {
            printf("\nDigite un valor entero para el elemento %d del vector 1\n", i);
            scanf("%d", &vector1[i]);
            
            vector3[TAMAÑO]=vector1[i];
        }
    }
        else printf("\nEl numero dado no es válido");
        
    printf("\nEscribe un numero entre 1 y 5 para definir el tamaño del vector 2\n");
    scanf("%d",&numElementos);
    if((numElementos>=1) && (numElementos<=5))
    {
        for (j = 0 ; j <= numElementos-1 ; j++)
        {
            printf("\nDigite un valor entero para el elemento %d del vector 2\n", j);
            scanf("%d", &vector2[j]);
            
            vector3[TAMAÑO+j]=vector2[j];
        }
    }
        else printf("\nEl numero dado no es válido");
    
    for(i=0; i< (2*TAMAÑO); i++)  
    {
            printf("%d", vector3[i]);
    }
}
