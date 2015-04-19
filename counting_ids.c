#include<stdio.h>
#include<math.h>

unsigned long long expon(long int ,long int ,unsigned long long );

int main(){
    long int num_digits, max_length,i;
    unsigned long long divider= 1000000007;
    unsigned long long result;
    while(1){
             result = 0;
             scanf("%ld %ld",&num_digits,&max_length);
             if(num_digits==0 && max_length==0){
                     break;
                     }
             else{
                  for(i=1;i<=max_length;i++){
                                             result = result+ expon(num_digits,i,divider);
                                             }
                 
                  printf("%llu\n",(result%divider));
                  }
             }
    getch();
    return 0;
    }
unsigned long long expon(long int a,long int b,unsigned long long c){
         unsigned long long x=1, y=a;
         while(b > 0){
                 if(b%2==1){
                            x =(x*y)%c;
                            }
                 y = (y*y)%c;
                 b = b/2;
                 }
         return x%c;
         }
