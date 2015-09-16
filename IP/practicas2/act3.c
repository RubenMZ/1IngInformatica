#include<stdio.h>
#include<math.h>

int main()
{
float r;
char opcion;


printf("Longitud de la circunferencia (A)\nArea de la circunferencia (B)\nArea de la esfera(C)\nVolumen de la esfera (D)\n");
printf("Elige opcion:");
scanf("%c", &opcion);
printf("Introduzca el radio:");
scanf("%f", &r);

switch(opcion)
{
case 'A': printf("La longitud de la esfera es: %f\n", 2*M_PI*r);
break;
case 'B': printf("El area de la circunferencia es: %f\n", M_PI*pow(r,2));
break;
case 'C': printf("El area de la esfera es: %f\n", 4*M_PI*pow(r,2));
break;
case 'D': printf("El volumen de la esfera: %f\n", (4*M_PI*pow(r,3))/3);
break;
}

return 0;
}
