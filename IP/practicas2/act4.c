#include<stdio.h>

int main()
{
int ano;
printf("¿Qué ano desea saber si fue bisiesto?:");
scanf("%d", &ano);

if(ano%4==0)
{
	if(ano%100==0)
	{
		if(ano%400==0)
		{
		printf("El ano %d es bisiesto.\n", ano);
		}
		else
		{
		printf("El ano %d no es bisiesto.\n", ano);
		}
	}
	else
	{
	printf("El ano %d es bisiesto.\n", ano);
	}
	}
else
{
printf("El ano %d no es bisiesto.\n", ano);
}

return 0;
}
