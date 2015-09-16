#include<stdio.h>
#define numeros 100

int main(){

int num, i, j, Vector1[numeros], Vector2[numeros];
printf("Introduce el numero de elementos:");
scanf("%d", &num);

	for(i=0;i<num;i++){
		printf("Escribe el elemento %d:", i+1);
		scanf("%d", &Vector1[i]);
	}

	for(i=num-1,j=0;i>=0;i--,j++){
		Vector2[j]=Vector1[i];
	}

for(j=0;j<num; j++){
printf("%d\t", Vector2[j]);
if(j==num-1)
printf("\n");
}

return 0;
}
