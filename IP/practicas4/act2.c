#include<stdio.h>
#include<math.h>
#define TAM 100

int main(){

int Vector[TAM], i, num, j, x, y, suma=0;

printf("Inserte el grado de la ecuacion:");
scanf("%d", &num);

for(i=0, j=num;i<=num; i++, j--)
{
if(j!=0){
	printf("Introduce el coeficiente de x^%d:", j);
	scanf("%d", &Vector[i]);
	}
	else
	{
	printf("Introduce el termino independiente:");
	scanf("%d", &Vector[i]);
	}
}

for(i=0, j=num; i<=num; i++, j--){
	if(i==0){
	printf("El polinomio es\t");
	}
	if(j!=0){
	printf("+ (%d)*X^%d ", Vector[i], j);
	}
	else{
	printf("+(%d)\n", Vector[i]);
	}
}

printf("¿Cual es el valor de x?:");
scanf("%d", &x);

for(i=0, j=num; i<=num; i++, j-- ){
if(j==0){
y=Vector[i];
suma=y+suma;
}
else{
y=Vector[i]*pow(x,j);
suma=y+suma;
}
}

printf("El polinomio en x=%d vale: %d\n", x, suma);

return 0;
}
