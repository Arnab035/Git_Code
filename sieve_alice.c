#include<stdio.h>

int main(){
    int testcases;
    long int number;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%ld",&number);
                      if(number%2==0){
                                      printf("%d\n",(number/2));
                                      }  
                      else{
                           printf("%d\n",(number/2)+1);
                           }
                      }
    getch();
    return 0;
    }
