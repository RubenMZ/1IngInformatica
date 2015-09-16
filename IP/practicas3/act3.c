//Programa para saber si un numero es capicua con funciones

#include<stdio.h>

//Prototipos
int capicua(int num);

int main()
{
int num;
printf("Ingresa el numero que desees saber si es capicua:");
scanf("%d", &num);
if(num==capicua(num))
{
printf("El numero %d es capicua.\n", num);
}
else
{
printf("El numero %d no es capicua.\n", num);
}

return 0;
}

//Funcion

int capicua(int num)
{
int mod, capicua;
capicua=0;
do
{
mod=num%10;
capicua=capicua*10+mod;
num=num/10;
}
while(num!=0);

return(capicua);
}
