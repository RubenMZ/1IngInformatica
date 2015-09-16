#include <stdio.h>
#define M 100
#define N 100

void leerMatriz(int Matriz[][N], int m, int n);
void imprimirMatriz(int Matriz[][N], int m, int n);
void intercambiarFilas(int Matriz[][N], int Matriz2[][N], int a, int b, int m, int n);


int main(){

int Matriz[M][N], Matriz2[M][N], m, n, a, b;
printf("Inserte numero de filas:");
scanf("%d", &m);
printf("Inserte numero de columnas:");
scanf("%d", &n);

leerMatriz(Matriz, m, n);

printf("Tu matriz es:\n");
imprimirMatriz(Matriz, m, n);

printf("Inserta la fila que desea intercambiar:");
scanf("%d", &a);
printf("Inserta la segunda fila que desea intercambiar:");
scanf("%d", &b);

intercambiarFilas(Matriz, Matriz2, a, b, m, n);

printf("Tu matriz intercambiada es:\n");
imprimirMatriz(Matriz2, m, n);

return 0;
}


void imprimirMatriz(int Matriz[][N], int m, int n){
	int i, j;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
		printf("%d\t", Matriz[i][j]);
		}
	printf("\n");
	}

}


void leerMatriz(int Matriz[][N], int m, int n){

	int i, j;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
		printf("Inserte el valor de la matriz %dfil x %dcol:", i+1, j+1);
		scanf("%d", &Matriz[i][j]);
		}

	}
}

void intercambiarFilas(int Matriz[][N], int Matriz2[][N], int a, int b, int m, int n){
	int i, j;
	for(i=0; i<m; i++){
	if(i==(a-1)){
		for(j=0; j<n; j++){
			Matriz2[a-1][j]=Matriz[b-1][j];
		}
		}
	else
	{
		for(j=0;j<n;j++){
			Matriz2[i][j]=Matriz[i][j];
		}
		
	}
	if(i==(b-1)){
		for(j=0;j<n; j++){
			Matriz2[b-1][j]=Matriz[a-1][j];
		}		
		
		}
	}

	}



