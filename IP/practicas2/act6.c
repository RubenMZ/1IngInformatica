#include<stdio.h>

int main()
{
int mes, bisiesto;

printf("Enero (1), Febrero (2), Marzo (3), Abril (4), Mayo (5), Junio (6), Julio (7), Agosto (8), Septiembre (9), Octubre (10), Noviembre (11), Diciembre(12)\n");
printf("Introduzca el mes que desee seleccionar: ");
scanf("%d", &mes);
printf("¿El año correspondiente a ese mes es bisiesto? S(1)/N(2): ");
scanf("%d", &bisiesto);

switch(mes)
{
case 1: printf("El mes de enero tiene 31 dias\n");
	break;
case 2: if(bisiesto==1)
	{
	printf("El mes de febrero tiene 29 dias ya que es año bisiesto\n");
	}
	else
	{
	printf("El mes de febrero tiene 28 dias porque no es bisiesto\n");
	}
	break;
case 3: printf("El mes de marzo tiene 31 dias\n");
	break;
case 4: printf("El mes de abril tiene 30 dias\n");
	break;
case 5: printf("El mes de mayo tiene 31 dias\n");
	break;
case 6: printf("El mes de junio tiene 30 dias\n");
	break;
case 7: printf("El mes de julio tiene 31 dias\n");
	break;
case 8: printf("El mes de agosto tiene 31 dias\n");
	break;
case 9: printf("El mes de septiembre tiene 30 dias\n");
	break;
case 10: printf("El mes de octubre tiene 31 dias\n");
	break;
case 11: printf("El mes de noviembre tiene 30 dias\n");
	break;
case 12: printf("El mes de diciembre tiene 31 dias\n");
	break;
}

return 0;
}
