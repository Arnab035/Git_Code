#include<stdio.h>

unsigned long int numberOfZeros(unsigned long );

int main(){
    unsigned long int result;
    unsigned long int number;
    int testcases;
    scanf("%d",&testcases);
    while(testcases-- > 0){
    scanf("%lu",&number);
    result= numberOfZeros(number);
    printf("%lu\n",result);
}
    getch();
    return 0;
    }
    
unsigned long int numberOfZeros(unsigned long number){
         unsigned long int j;
         unsigned long int count=0;
         if(number==5)
            return 1;
         else{
              for(j=5;number/j>=1;j=j*5)
                  count+=number/j;
              return count;
              
              }
         }
