#include<stdio.h>

int main()
{
int numero, par, impar;
par=0;
impar=0;


do
{
printf("Introduce un número:");
scanf("%d", &numero);

if((numero%2==0))
{
par=par+1;
}
else
{
impar=impar+1;
}
}
while(numero!=-1);


printf("Hay %d pares y %d impares.\n", par, impar);

return 0;
}
