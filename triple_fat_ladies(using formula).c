#include<stdio.h>
#include<inttypes.h>
int main(){
    unsigned long int number;
    unsigned long long result;
    int testcases;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%lu",&number);
                      result = (number-1)*250 + 192;
                      printf("%I64d\n",result);
                      
                      }
    getch();
    return 0;
    }
