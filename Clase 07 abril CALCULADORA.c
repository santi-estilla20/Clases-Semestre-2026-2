#include <stdio.h>

int main()
{
  float n1,n2,res;
    int op=0;
  printf("Bienvenido a mi calculadora\n");
  printf("Escoge una opcion\n");
  printf("Escoge una opcion\n");
  printf("1)Suma\n");
  printf("2)Resta\n");
  printf("3)Multiplicacion\n");
  printf("4)Division\n");
  printf("opcion: ");
  scanf("%d",&op);
  printf("Ingresa dos cantidades separada por espacio\n");
  scanf("%f %f",&n1,&n2);
  
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
    }
    return 0;
  }



