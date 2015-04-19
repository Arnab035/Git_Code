#include<stdio.h>

int main(){
    int testcases;
    unsigned long long terms;
    double result;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%llu",&terms);
                      result = (3.00/4.00) + (1.0/(2 * (terms+2)))-(1.0/(2 * (terms+1)));
                      printf("%.11f\n",result);
                      }
    getch();
    return 0;
    }
