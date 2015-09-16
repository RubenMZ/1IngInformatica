#include "primo.h"
#include <stdio.h>

int main(){
    int num, j, res;
    
    printf("Inserte el numero para descomponer en factores primos:");
    scanf("%d", &num);
    
    printf ("Nº       |       Factores primos\n");
    printf ("--       |       ---------------\n");
    
    res=num;    
    for(j=2; (j<num)&&(num!=1); j++)
    {
             
             if (primo(j)==1){
                              while((res%j==0)&&(res!=1)){
                              
                              printf("%d       |       %d \n", res, j);
                              res=res/j;
                              }
             
             }
    
    }
    printf("1        |\n");
    
    
    return 0;
    }
