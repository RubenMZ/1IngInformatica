#include<stdio.h>

int main()
{
float nota, epractico, eteorico, micros, participacion, cuestionarios;

printf("Introduzca la nota del practico:");
scanf("%f", &epractico);
printf("Introduzca la nota del teorico:");
scanf("%f", &eteorico);
printf("Introduzca la nota de pruebas de micros:");
scanf("%f", &micros);
printf("Introduzca la nota de participacion:");
scanf("%f", &participacion);
printf("Introduzca la nota de cuestionarios:");
scanf("%f", &cuestionarios);

if(cuestionarios>5)
{
eteorico=cuestionarios;
}
if(eteorico<5||epractico<5)
{
printf("No hace media\n");
}
else
{
nota=0.5*epractico+0.2*eteorico+0.15*micros+0.1*participacion+0.05*cuestionarios;

printf("La nota final del alumno es: %f\n", nota);
}
return 0;
}
