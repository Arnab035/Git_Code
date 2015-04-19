#include<stdio.h>

int color_func(int ,unsigned long long );

int main(){
    int year;
    int color;
    unsigned long long position;
    scanf("%d",&year);
    scanf("%llu",&position);
    color = color_func(year,position);
    if(color==0) 
        printf("red\n");
    else printf("blue\n");
    getch();
    return 0;
    }
    
int color_func(int n,unsigned long long k){
    unsigned long long above;
    int result;
    if((n==0)&&(k==0))
       return 0;
    else{
         above = k/2;
         }
    result = color_func(n-1,above);
    if(k == 2*above){
         if(result == 0)
             result = 1;
         else result = 0;
         }
    else{
         if(result == 0)
              result = 0;
         else result = 1;
         }
    return result;
    }
