#include<stdio.h>

unsigned long long calculate_gcd(unsigned long long ,unsigned long long );

int main(){
    int testcases;
    scanf("%d",&testcases);
    unsigned long long n,i,j;
    while(testcases-- > 0){
                      scanf("%llu",&n);
                      i = n/2;
                      for(j = i;j>=1;j--){
                                         if(calculate_gcd(j,n)==1){
                                                                   printf("%llu\n",j);
                                                                   break;
                                                                   }
                                         }
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
