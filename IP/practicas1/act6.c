#include<stdio.h>

int main()
{

float bytes;
int B, MB, KB, T;


printf("Inserte el número de bytes: ");
scanf("%f",&bytes);
T=1024;

MB=(bytes/(T*T));
KB=(((bytes/(T*T))-MB)*T);
B=((((bytes/(T*T))-MB)*T)-KB)*T;

printf("El numero de megas es: %d\n",MB);
printf("El numero de kbytes es: %d\n",KB);
printf("El numero de kbytes es: %d\n",B);

return 0;

}
