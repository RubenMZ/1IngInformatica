#include<stdio.h>

int main()
{ 
   char car1, car2, car3='A'+1; 
   car1=65; 
   car2='A'; 
   printf("\ncar1:<%c> car2:<%c>", car1, car2); 
   printf("\ncar1:<%d> car2:<%d>", car1, car2);
   car1++; 
   car2=car1+1; 
   car3=65+2; 
   printf("\ncar1:<%c> car2:<%c> car3:<%c>", car1, car2, car3); 
   printf("\ncar1:<%d> car2:<%d> car3:<%d>\n", car1, car2, car3);
} 
