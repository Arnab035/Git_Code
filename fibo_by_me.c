#include<stdio.h>
#include<conio.h>

int fibo(int );

int main(){
    int num,i;
    printf("Enter the number upto which fibonacci series is to be calculated:-\n");
    scanf("%d",&num);
    if(num<0){
              printf("Please enter a positive number");
              }
    else{
         for(i=1;i<=num;i++)
         {
         printf("%d\t",fibo(i));
         }
    }
    getch();
    return 0;
    }
int fibo(int number){

    if(number==1){
          return 1;
         }
    else if(number==2){
         return 1;
         }
    else{
         return fibo(number-1)+fibo(number-2);
         }
    }
