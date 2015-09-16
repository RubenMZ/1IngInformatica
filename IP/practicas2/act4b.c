#include<stdio.h>

int main ()
{
int ano;
printf("Introduce el numero del año:");
scanf("%d", &ano);

if((ano%4==0)&&((ano%100!=0)||(ano%400==0)))
{
printf("%d es bisiesto", ano);
}
else
{
printf("%d no es bisiesto", ano);
}




return 0;
}
