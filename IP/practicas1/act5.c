#include<stdio.h>

int main()
{

int n1,n2;
char nombre[100],apellido[100],letra;

printf("Numero DNI:\n");
scanf("%d",&n1);
getchar();
printf("LETRA DNI:\n");
scanf("%c",&letra);
printf("Numero clase:\n");
scanf("%d",&n2);
getchar();
printf("Nombre:\n");
gets(nombre);

printf("Apellidos:\n");
gets(apellido);
printf("%s %s con DNI­----> %d %c\n N Clase­----> %d\n",nombre, apellido, n1, letra,n2);
return(0);
}
