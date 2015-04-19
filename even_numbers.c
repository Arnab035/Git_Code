#include<stdio.h>

unsigned long long inverse(unsigned long long );

int main(){
    int n,i;
    scanf("%d",&n);
    unsigned long long numbers[n];
    
    for(i=0;i<n;i++){
                     scanf("%llu",&numbers[i]);
                     }
    for(i=0;i<n;i++){
                     if((numbers[i]%2)==0){
                                           numbers[i] = inverse(numbers[i]);
                                           }
                     } 
    for(i=0;i<n;i++){
                     printf("%llu\n",numbers[i]);
                     }
    getch();
    return 0;
    }
    
unsigned long long inverse(unsigned long long num){
         int a = 1;
         int i = 1;
         while(a < num){
                  a = a + (int)pow(2.00,(float)i);
                  i+=1;
                 }
         return (a-num);
         }
