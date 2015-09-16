#include<stdio.h>

int main()
{
int ano, edad, nacimiento;
char nombre[100], apellidos[100];

printf("Introduzca su nombre: \n");
gets(nombre);

printf("Introduzca sus apellidos:\n");
gets(apellidos);
printf("Introduzca su fecha de nacimiento:\n ");
scanf("%d",&nacimiento);
printf("Introduzca el año actual:\n ");
scanf("%d",&ano);


edad=ano-nacimiento;

printf("%s %s tiene la edad de %d años\n",nombre,apellidos,edad);

return 0;
}
