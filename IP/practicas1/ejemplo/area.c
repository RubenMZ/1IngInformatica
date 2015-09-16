#include <stdio.h>

int main()
{
int ancho;
int alto;
int area;

printf("Senor inserte su ancho:");
scanf("%d",&ancho);
printf("Senor inserte su alto:");
scanf("%d",&alto);

area=ancho*alto;

printf("El area es:%d\n",area);

return 0;

}
