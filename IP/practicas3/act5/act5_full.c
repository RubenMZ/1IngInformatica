#include<stdio.h>


int factorial(int num);



int main(){
    
    int m, n, r, res, h, l;
    
    printf("Inserte el numero superior del combinatorio:");
    scanf("%d", &m);
    printf("Inserte el numero inferior del combinatorio:");
    scanf("%d", &n);
    
    h=factorial(m);
    l=factorial(n);
    r=m-n;
    r=factorial(r);
    
    
    res=h/(l*r);
    
    printf("El combinatorio de %d y %d es %d.\n", m, n, res);


    return 0;
    }


int factorial(int num){
    int i, res=1;
    
    for(i=2; i<=num; i++){
    res= res*i;
    }
    return res;
    }


