/*6.  Se desea mostrar la equivalencia entre funciones que devuelven un resultado y funciones que
utilizan parámetros por referencia.
a) Primera versión: función denominada media
1. Recibe dos números x e y de tipo double pasados por valor.
2. Devuelve   como   resultado   la   media   aritmética   de   los   números  x  e  y  pasados  como  
parámetros.
b) Segunda versión: función denominada media_referencia
1. Recibe dos números x e y de tipo double pasados por valor
2. Recibe otro parámetro denominado resultado de tipo double pero pasado por referencia.
3. La función debe asignar a resultado el valor de la media aritmética de x e y.
c) Codifica un programa, denominado media.c, que permita comprobar el funcionamiento de las 
dos funciones anteriores.*/


#include<stdio.h>

double media(double x, double y);
void media_referencia(double x, double y, double * resultado);


int main(){
	double x, y, media1, media2;

	printf("Inserta x: ");
	scanf("%lf", &x);
	printf("Inserta y: ");
	scanf("%lf", &y);


	media1=media(x,y);
	media_referencia(x, y, &media2);

	printf("La media de x (%.3lf) e y (%.3lf) por valor es: %.3lf\n", x,y,media1);
	printf("La media de x (%.3lf) e y (%.3lf) por referencia es: %.3lf\n\n",x,y, media2);


return 0;
}

//FUNCIONES

	double media(double x, double y){
		double resultado;
		resultado=((x+y)/2);
		return (resultado);
	}

	void media_referencia(double x, double y, double * resultado){
		*resultado=((x+y)/2);
	}
