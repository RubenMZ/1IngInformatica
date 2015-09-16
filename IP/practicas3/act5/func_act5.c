#include "factorial.h"

int factorial(int num){
    int i, res=1;
    
    for(i=2; i<=num; i++){
    res= res*i;
    }
    return res;
    }

int combinatorio (int m, int n){
    int res, r, h, l;
    
    h=factorial(m);
    l=factorial(n);
    r=factorial(m-n);
    
    res=h/(l*r);
    
    return res;
    }
