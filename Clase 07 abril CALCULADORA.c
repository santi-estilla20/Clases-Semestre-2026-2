#include <math.h>
#include <stdio.h>

//Declaracion de variables globales

//Declaracion de funciones
double suma1(double n1, double n2)
{
    double res;
    res = n1+n2;
    return res;
}
void suma2(double n1, double n2)
{
    double res;
    res = n1+n2;
    printf("El resultado de la suma es %lf\n, res");
}
// res = suma1 (n1,n2);
//suma2(n1,n2)
void main()
{
  float n1,n2,res;
    int op=0;
    char opi;
    printf("¿Desea calcular algo? ");
    scanf("%c",&opi);

      
      printf("Bienvenido a mi calculadora\n");
      printf("Escoge una opcion\n");
      printf("1)Suma\n");
      printf("2)Resta\n");
      printf("3)Multiplicacion\n");
      printf("4)Division\n");
      printf("5)Raíz Cuadrada\n");
      printf("6)Potencia\n");
      printf("7)Salida\n");
     do
     {
      printf("opcion: ");
      scanf("%d",&op);
     }
     while (op < 1 || op > 7 );
      
    if(op != 7)
    {
        if(op == 5)
        {
            printf("Dame la cifra para la raiz:");
            scanf("&lf",n1);
        }
    }
      switch(op)
      {
            default:
              printf("Opcion no valida\n");
              break;
            case 1:
              res=n1+n2;
              printf("El resultado es %f\n",res);
              break;
            case 2:
              res=n1-n2;
              printf("El resultado es %f\n",res);
              break;
            case 3:
              res=n1*n2;
              printf("El resultado es %f\n",res);
              break;
            case 4:
              res=n1/n2;
              printf("El resultado es %f\n",res);
              break;
            case 5:
              res=sqrt(n1);
              printf("El resultado es %f\n",res);
              break;
            case 6:
              res=pow(n1, n2);
              printf("El resultado es %f\n",res);
              break;
            case 7:
              printf("El programa finalizó");
              
        }
        
}
