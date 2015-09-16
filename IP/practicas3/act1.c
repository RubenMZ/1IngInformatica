/*Programa con menú para calcular el area de un cuadrado, de un círculo o un triángulo.*/
#include<stdio.h>
#include<math.h>

//Prototipos

float cuadrado(float l); 
float circulo(float r);
float triangulo(float b, float h);



int main()
{
int opcion;
float l, r, b, h, area1, area2, area3;

do
{
	printf("Area del cuadrado(1)\nArea del circulo(2)\nArea del triangulo(3)\nSalir(4)\n");
	printf("¿Que opcion desea seleccionar?:");
	scanf("%d", &opcion);

	switch(opcion)
	{
	case 1: printf("Inserte el lado de su cuadrado:");
	scanf("%f", &l);
	area1=cuadrado(l);
	printf("El area del cuadrado es %f.\n", area1);
	break;

	case 2: printf("Inserte el radio de su circulo:");
	scanf("%f", &r);
	area2=circulo(r);
	printf("El area del circulo es %f.\n", area2);
	break;

	case 3: printf("Inserte la base:");
	scanf("%f", &b);
	printf("Inserte la altura:");
	scanf("%f", &h);
	area3=triangulo(b,h);
	printf("El area del triangulo es %f.\n", area3);
	break;

	case 4: printf("Usted ha salido de la aplicación.\n");
	break;

	default: printf("No ha seleccionado ninguna opción.\n");
	}


}
while(opcion!=4);

return 0;
}

/*Declaracion de las funciones*/

	float cuadrado(float l)
	{
	float area1;
	area1=pow(l,2);
	return(area1);
	}

	
	float circulo(float r)
	{
	float area2;
	area2=M_PI*pow(r,2);
	return(area2);
	}


	float triangulo(float b, float h)
	{
	float area3;
	area3=(b*h)/2;
	return (area3);
	}
