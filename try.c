#include<stdio.h>

long int calculate_gcd(unsigned long long ,unsigned long long );

int main(){
   int testcases;
   unsigned long long numerator,denominator,i,j;
   long int ratio;
   char fraction[20];
   scanf("%d",&testcases);
   while(testcases-- > 0){
                     scanf("%s",fraction);
                     numerator =0,denominator=0;
                     for(i=0;fraction[i]!='/';i++){
                                                   numerator = numerator*10;
                                                   numerator = numerator + (fraction[i]-'0');   //to convert character into number 
                                                   }  
                     for(j=i+1;fraction[j]!='\0';j++){
                                                      denominator = denominator*10;
                                                      denominator = denominator + (fraction[j]-'0');
                                                      }
                     ratio = calculate_gcd(numerator,denominator);
                     printf("%llu/%llu\n",(numerator/ratio),(denominator/ratio));
                     
                     }
   getch();
   return 0;
    }


long int calculate_gcd(unsigned long long a,unsigned long long b)
{
     long int result;
     unsigned long t;
     if(a<=b){
              while(b%a!=0){
                            t = b%a;
                            b = a;
                            a = t;
                            }
              result = a;
              }
     else{
          while(a%b!=0){
                        t = a%b;
                        b = a;
                        a = t;
                        }
          result = b;
          } 
     return result;    
}
