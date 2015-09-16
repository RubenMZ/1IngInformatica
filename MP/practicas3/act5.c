#include<stdio.h>

float Leibniz(int n);

int main(){
    
    float resultado;
    int n;
    
    printf("Inserta el numero de elementos que desea aproximar: ");
    scanf("%d", &n);
    
    resultado=Leibniz(n);
    
    printf("El numero es %f\n\n", resultado);
    
    
    return 0;
    }
    
float Leibniz(int n){

       float resultado;

	if(n==1){//Caso base
	         return (4);
            	
	}
	else{//Cuerpo
	     if(n%2==0){
              resultado= -(2*n-1);
         }else{
              resultado= (2*n-1);
         }  
         return (Leibniz(n-1) + 4/resultado);      
	}
}
