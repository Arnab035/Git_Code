#include<stdio.h>

int main(){
     unsigned long long number;
     scanf("%llu",&number);
     if(number==1)
          printf("TAK\n");
     else if(number & (number-1))      //this is bitwise 'AND' operator, to check if the number is a power of 2//
          printf("NIE\n");
     else
          printf("TAK\n");
     getch();
     return 0;
    
    }
