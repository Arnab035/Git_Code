#include<stdio.h>

int main(){
    unsigned long long number;
    int last_digit;
    scanf("%llu",number);
    if(number%10!=0){
        printf("1\n");
        last_digit = number%10;
        printf("%d\n",last_digit);
        }
    else{
         printf("2\n");
         }
    getch();
    return 0;    
    }
