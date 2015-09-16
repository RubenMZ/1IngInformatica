#include"prot3.h"


int main(){


	int nEle, c, borrados;
	jug *jugadores;
	
	printf("Introduce el numero de jugadores: ");
	scanf("%d", &nEle);	
	

	jugadores = reservarvector(nEle);
	
	rellenarvector(jugadores, nEle);
	
	imprimirvector(jugadores, nEle);

	getchar();
	printf("¿Que caracter tienen los jugadores para ser borrados?: ");
	scanf("%c", &c);

	borrados = borrarjugador(jugadores, c, &nEle);
	
	imprimirvector(jugadores, nEle);
	
	printf("Se han borrado %d jugadores.\n\n\n", borrados);	
		
	liberarvector(&jugadores);

return 0;
}
