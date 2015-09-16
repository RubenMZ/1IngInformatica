#include<string.h>

int es_prefijo(char *cadena, char *prefijo){
	char * ptr;
		ptr=strstr(cadena,prefijo);
		if((ptr-cadena)==0)
		return 1;
		else
		return 0;

}
