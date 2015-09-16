#include<stdio.h>
#include<ctype.h>

int main()
{
char caracter;
printf("Introduce el caracter de tu codigo:");
scanf("%c", &caracter);

if(isgraph(caracter))
{
	if(isdigit(caracter))
	{
		printf("%c es imprimible y es un digito.\n", caracter);
	}
	else
	{
		if(isalpha(caracter))
		{
			if(islower(caracter))
			{
			printf("%c es imprimible y es un caracter alfabetico en minuscula\n", caracter);
			}
			else
			{
			printf("%c es imprimible y es un caracter alfabetico en mayuscula.\n", caracter);
			}
		}
		else
		{
		printf("%c es imprimible pero no es digito ni caracter\n", caracter);
		}
	}
}
else
{
printf("%c no es imprimible.\n", caracter);
}

return 0;
}
