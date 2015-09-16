#include<stdio.h>

int main()
{
int quinquenio, anos;
float sueldo, sueldo_bruto, sueldo_neto;

printf("Numero de quinquenios:");
scanf("%d",&quinquenio);
printf("Numero restante de anos: ");
scanf("%d", &anos);
printf("Introduzca su salario:");
scanf("%f", &sueldo);

sueldo_bruto=sueldo+60*quinquenio+6*anos;
sueldo_neto=sueldo_bruto-(0.05*sueldo_bruto)-(0.2*sueldo_bruto);

printf("Tu salario bruto es: %f y tu salario neto es: %f\n",sueldo_bruto,sueldo_neto);

return 0;

}
