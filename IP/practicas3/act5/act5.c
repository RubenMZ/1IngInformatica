#include<stdio.h>
#include"factorial.h"

int main(){
    
    int m, n, res;
    
    printf("Inserte el numero superior del combinatorio:");
    scanf("%d", &m);
    printf("Inserte el numero inferior del combinatorio:");
    scanf("%d", &n);
    
    res= combinatorio(m,n);
    
    printf("El combinatorio de %d y %d es %d.\n", m, n, res);
    return 0;
    }
