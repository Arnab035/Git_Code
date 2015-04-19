#include<stdio.h>

int main(){
    int testcases,starter;
    unsigned long long numbers;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%llu %d",&numbers,&starter);
                      if(starter==0){
                                     printf("Airborne wins.\n");
                                     }
                      else{
                           printf("Pagfloyd wins.\n");
                           }
                      
                      }
    getch();
    return 0;
    }
