#include<stdio.h>

int main(){
    int testcases;
    unsigned long long number,result;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%llu",&number);
                      result = 192 + (number-1)*250;
                      printf("%llu\n",result);
                      }
    getch();
    return 0;
    }
