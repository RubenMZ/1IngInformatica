#include<stdio.h>
#include<math.h>

float main()
{
float x,y;

printf("Introduzca el valor de la variable x:");
scanf("%f",&x);

y=((sqrt(x))*(pow(x,3)))/log(x*pow(x,2)+x);

printf("El resultado de y es: %f\n",y);

return 0;
}

