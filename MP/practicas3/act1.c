#include<stdio.h>

/*
1.  La   siguiente   función   recursiva   se   encarga   de   multiplicar   los   números   comprendidos   entre 
[inicio,limite):

	1. Identificar el caso de parada de la función funcionRecursiva --> Cuando el inicio supera al limite, la recursiva devuelve -1 mediante como si fuera error, y sino, el caso base seria cuando el inicio es igual al limite y devuelve 1.
	2. Realizar un esquema sobre las variaciones en la pila de control. -->
	3. ¿Qué resultado daría la llamada funcionRecursiva(14,10) ? --> Devolveria un -1 y daría un fallo ya que el numero inicial es superior al limite.
	4. ¿Qué resultado daría la llamada funcionRecursiva(4,7)? --> Devolvería 4*5*6 = 120
*/

int funcionRecursiva (int inicio, int limite);

int main(){

	int num1, num2, res;

	printf("Introduce el numero inicial: ");
	scanf("%d", &num1);

	printf("Introduce el numero limite: ");
	scanf("%d", &num2);	

	res= funcionRecursiva (num1, num2);

	if(res==-1)
		printf("Fallo en la recursiva, inicial es superior al limite\n\n");
	else
		printf("El resultado es %d\n\n", res);
	

	return 0;
}

int funcionRecursiva (int inicio, int limite) { 
	
	int retorno; 

	if (inicio>limite)
		return(-1);
	else{ 
   		if (inicio == limite) 
      			return (1); 
  		 else{
			retorno = inicio * funcionRecursiva(inicio+1, limite); 
			return retorno;
		}
	}
} 
