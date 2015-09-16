#include<stdio.h>

int main()
{
char a='A', b='9', c='$';
int i=5;
float f=2.5;



printf("%c, %c, %c", a,b,c); 
printf("\n%4c, %5c, %6c", a,b,c); 
printf("\n%d, %d, %d", a,b,c); 
printf("\n%c, %c\t, %c", a,b,c); 
printf("\na=%c, b=%­-3c, c=%8c", a,b,c); 
printf("\n%d, %f\n, %f, %d", i,i,f,f); 
printf("\nEl valor es: %f", (3*f)/3*i); 
printf("\nEl valor de f con cuatro decimales: %.4f\n", f); 

return 0;
}
