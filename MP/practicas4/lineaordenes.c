#include<stdio.h>


int main(int argc, char** argv){

	int num1, num2;

	if(argc!=3){

		printf("Numero incorrecto de parametros\n");
		printf("<ejecutable><numero1><numero2>\n\n");
		exit(-1);
	}else{

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		printf("Suma = %d\n", num1+num2);
	}


}
