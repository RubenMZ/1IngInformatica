#include<stdio.h>

int main()
{
int num, i, contador, mod;

printf("Inserte el numero para saber si es primo:");
scanf("%d", &num);
contador=0;

for(i=1; i<=num; i++)
{
mod=num%i;
	if(mod==0)
	{
	contador=(contador+1);
	}
	else
	{
	contador=contador;
	}
}


if(contador==2)
{
printf("El numero %d es primo.\n", num);
}
else
{
printf("El numero %d no es primo.\n", num);
}

return 0;
}
