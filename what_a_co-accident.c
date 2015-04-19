#include<stdio.h>

int main(){
    int testcases;
    int num1,num2;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%d %d",&num1,&num2);
                      if(num1==1){
                                  if(num2%2==0){
                                                printf("Suresh\n");
                                                }
                                  else{
                                       printf("Ramesh\n");
                                       }
                                  }
                      else if(num2==1){
                                       if(num1%2==0){
                                                     printf("Suresh\n");
                                                     }
                                       else{
                                            printf("Ramesh\n");
                                           }
                                       }
                      else{
                           if(num1%2==0 || num2%2==0){
                                        printf("Suresh\n");
                                        }
                           else printf("Ramesh\n");
                           }
                      }
    getch();
    return 0;
    }
