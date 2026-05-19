#include <stdio.h>

int main()
{
    int i, var = 0;
    char sino = 's';
    printf("PROGRAMA\n");
    
    while(sino == 's' || var <= 1000)
    {
        for(i=0; i<20; i++)
        {
            var = var + 1 ;
            printf("%d ", var);
        }
        printf("\n");
        printf("Te gustaría seguir con el listado? s/n\n");
        scanf(" %c", &sino);
        
        if(sino != 's')
        {
            var = 1001;
        }
        
    }
    
    printf("Fin del programa.\n");

    return 0;
}
