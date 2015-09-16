#include<stdio.h>
#include<math.h>

int main()
{
int i, s; 
float suma, funcion;

printf("Introduce el numero entero positivo del cual quiera realizar el sumatorio:");
scanf("%d", &s);

suma=0;
	
for(i=1; i<=s; i++)
	{
	funcion=(pow(-1,i)*(1/pow(i,2)));
	suma=suma+funcion;
	}

printf("El sumatorio vale: %f\n", suma);

return 0;
}
