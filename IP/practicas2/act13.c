#include<stdio.h>

int main()
{
int numero, perfecto, i;

printf("Introduce el numero para ver si es perfecto:");
scanf("%d", &numero);
perfecto=0;


for(i=1; i<numero; i++)
{
if(numero%i==0)
{
perfecto=perfecto+i;
}
}

if(numero==perfecto)
{
printf("El numero %d es perfecto.\n", numero);
}
else
{
printf("El numero %d no es perfecto.\n", numero);
}


return 0;
}
