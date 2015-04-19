#include<stdio.h>
#include<conio.h>

int main(){
    int num,i;
    printf("Enter the number upto which fibonacci series is to be calculated\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
    printf("%d\t",fibo(i));
}
    getch();
    return 0;
    }
int fibo(int number){
    int numbers;
    if(number==1){
          return 1;
         }
    else if(number==2){
         
         return 1;
         }
    else{
         numbers = fibo(number-1)+fibo(number-2);
         
         return numbers;
         }
    }
