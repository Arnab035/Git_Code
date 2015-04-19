#include<stdio.h>

int main(){
    int mushrooms[10],i;
    for(i=0;i<10;i++){
                      scanf("%d",&mushrooms[i]);
                      }
    int sum = 0;
    i = 0;
    while((sum < 100) && i<=9 ){
              
              sum += mushrooms[i];
              i++;
              }
   if(i > 9){
        if(sum<100)
                  printf("%d",sum);
        else{
             if(sum==100)
                         printf("100\n");
             else if((sum-100) <= (100-(sum-mushrooms[i-1]))){
                        printf("%d",sum);
                        
                       }
             else
                   printf("%d",sum-mushrooms[i-1]);
             }
        }
   else{
        if(sum==100)
             printf("100\n");
        else if((sum-100) <= (100-(sum-mushrooms[i-1]))){
                        printf("%d",sum);
                        
                       }
        else
             printf("%d",sum-mushrooms[i-1]);
             }
        
    getch();
    return 0;
    }
