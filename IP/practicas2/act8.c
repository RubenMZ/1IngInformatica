#include<stdio.h>

int main ()
{
int i, numero;
numero=1;

for(i=0; i<100; i++)
{
	if(numero%10==0)
	{
	printf("%5d\n", numero);
	}
	else
	{
	printf("%5d", numero);
	}
numero++;
}

printf("Fin del programa\n");
return 0;
}
