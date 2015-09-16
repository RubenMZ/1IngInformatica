#include<stdio.h>

float main()
{
float longitud, anchura, area;

printf("Introduzca la longitud de la habitacion:");
scanf("%f",&longitud);
getchar();
printf("Introduzca la anchura de la habitacion:");
scanf("%f",&anchura);

area=longitud*anchura;

printf("La superficie de la habitacion es: %10.4f metros cuadrados\n", area);

return 0;


}
