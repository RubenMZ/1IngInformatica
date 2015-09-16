/*Programa que imprime los numeros perfectos que hay hasta el 10000 con una función para averiguar si el número es perfecto.*/

#include<stdio.h>

//Prototipos

int perfecto(int num);

int main()
{
	int num, i;

		for(i=1; i<=10000; i++)
		{
		num=i;
		if(num==perfecto(num))
		{
		printf("El numero %d es perfecto.\n", num);
		}
		}
return 0;
}


//Funcion

int perfecto(int num)
{
int perfecto, i;
perfecto=0;
	for(i=1; i<num; i++)
	{
		if(num%i==0){
			perfecto=perfecto+i;
		}
	}
return (perfecto);
}
