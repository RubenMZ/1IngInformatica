#include<stdio.h>

int main(){
float fichas, apuesta, nficha;
int opcion, numero, numapuesta;

printf("COMIENZA EL JUEGO DE LA RULETA\n");
srand(time(NULL));
fichas=0;
nficha=0;

do
{
	printf("Introduzca una de las siguientes opciones:\n1.Introducir fichas.\n2.Jugar.\n3.Salir.\n");
	printf("¿Qué opción desea?:");
	scanf("%d", &opcion);

	if((fichas==0)&&(opcion==2)){
	printf("Tu no puedes empezar a jugar porque no tienes fichas.\n");
	}
	else{
	switch(opcion)
	{
		case 1: printf("¿Cuantas fichas desea meter en su cuenta?:");
			scanf("%f", &nficha);
			fichas=fichas+nficha;
			break;
		case 2: if(fichas==0){
				printf("Usted debe introducir fichas.\n");
				}
			else
			{
				printf("¿Que numero desea apostar?:");
				scanf("%d", &numapuesta);
				if((numapuesta<33)&&(numapuesta>=0)){
				printf("¿Cuanto desea apostar a ese numero?:");
				scanf("%f", &apuesta);
				if(apuesta>fichas){
				printf("No puedes apostar mas de lo que tienes.\n");
				}
				else
				{
					numero=rand()%33;
					printf("El numero premiado es %d\n", numero);
					if(numero==numapuesta)
					{
					fichas=apuesta*10+fichas;
						printf("Usted gana diez veces lo apostado, tiene %f fichas.\n", fichas);
					}
					else
					{
						if(numero%2==numapuesta%2)
							{
							fichas=apuesta*2+fichas;
							printf("Usted gana el doble de lo apostado, tiene %f.\n", fichas);
							}
						else
							{
							fichas=fichas-apuesta;
							printf("Usted pierde su apuesta, tiene %f fichas.\n", fichas);
							}
					}
				}
				}
				else
				{
					printf("El numero no está en la ruleta.\n");
				}
			}
break;
		case 3: printf("Gracias por su visita.\n");
break;
		default: printf("Es necesario elegir una opcion.\n");


}

}
}
while(opcion!=3);


printf("Usted tiene %f fichas, retire su dinero.\n", fichas);

return 0;
}
