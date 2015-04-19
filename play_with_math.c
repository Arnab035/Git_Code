#include<stdio.h>

unsigned long long calculate_gcd(unsigned long long ,unsigned long long );

int main(){
    int testcases;
    unsigned long long a,b,x,y;
    unsigned long long gcd;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%llu %llu",&a,&b);
                      gcd = calculate_gcd(a,b);
                      if(gcd==1){
                                 x = b;
                                 y = a;
                                 }
                      else{
                           x = b/gcd;
                           y = a/gcd;
                           }
                      printf("%llu %llu\n",x,y);
                      }
    getch();
    return 0;
    }
    
unsigned long long calculate_gcd(unsigned long long i,unsigned long long j){
         unsigned long long temp;
         if(i<=j){
                  temp = j%i;
                  while(temp!=0){
                                 j = i;
                                 i = temp;
                                 temp = j%i; 
                                 }
                  return i;
                  }
         else{
              temp = i%j;
              while(temp!=0){
                             i = j;
                             j = temp;
                             temp = i%j;
                             }
              return j;
              }
         
         }
