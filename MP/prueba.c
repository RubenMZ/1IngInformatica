#include<stdio.h>

int prueba(int x, int y);
void prueba2(int*x, int *y, int*res);
void prueba3(int x, int y, int res);



int main(){

int x,y, res1, res2, res3=0;

x=1;
y=2;

res1=prueba( x, y);
printf("prueba 1: %d inc++ por %d inc++ es %d\n", x,y,res1);

x=1;
y=2;

prueba2(&x, &y, &res2);
printf("prueba 2: %d inc++ por %d inc++ es %d\n", x,y,res2);

x=1;
y=2;

prueba3(x, y, res3);
printf("prueba 3: %d inc++ por %dinc++ es %d\n", x,y,res3);


return 0;
}

int prueba(int x, int y){
	
	int res;
	x++;
	y++;
	res=x*y;

	return (res);
}


void prueba2(int*x, int *y, int*res){

(*x)++;
(*y)++;
(*res)=(*y)*(*x);
}

void prueba3(int x, int y, int res){

x++;
y++;
res++;
}
