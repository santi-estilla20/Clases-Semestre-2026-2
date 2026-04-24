#include <stdio.h>
#define TAMAÑO 8

void main()
{
    char tablero[TAMAÑO][TAMAÑO];
    int i,j;
    
    for (i=0; i < 8; i++ )
    {
        for (j=0; j < 8; j++)
        {
           tablero[i][j]='O';
        }
    }
    
     for (i=0; i < 8; i++ )
    {
        for (j=0; j < 8; j++)
        {
            printf("%c", tablero[i][j]);
        }
          printf("\n");
    }
   

   
}
