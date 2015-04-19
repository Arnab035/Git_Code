#include<stdio.h>

int isZero(signed long int[] );

int cars;

int main(){
    int i;
    long int a;
    while(1){
             scanf("%d",&cars);
             if(cars==0) break;
             
             int numbers[cars];
             int re_numbers[cars];
             signed long int positions[cars];
             for(i=0;i<cars;i++){
                                 scanf("%d %ld",&numbers[i],&positions[i]);
                                 }
             if(isZero(positions)){
                                   for(i=0;i<cars;i++){
                                                       a = positions[i];
                                                       if(a!=0){
                                                               if(positions[i+a]==0){
                                                                                     printf("-1\n");
                                                                                     break;
                                                                                     }
                                                               else if((i+positions[i])>=cars){
                                                                                               printf("-1\n");
                                                                                               break;
                                                                                               }
                                                               else if((i+positions[i])<0){
                                                                                           printf("-1\n");
                                                                                           break;
                                                                                           }
                                                               else{
                                                                    continue;
                                                                    }
                                                                }
                                                       else continue;
                                                       }
                                   if(i==cars){
                                               for(i=0;i<cars;i++){
                                                                   re_numbers[i+positions[i]]= numbers[i];
                                                                   }
                                               for(i=0;i<cars;i++){
                                                                   printf("%d ",re_numbers[i]);
                                                                   
                                                                   }
                                               printf("\n");
                                              
                                              
                                               }
                                           
                                   }
             else{
                  printf("-1\n");
                  }
             
             }
    getch();
    return 0;
    }
    
int isZero(signed long int array1[])
    {
       long int sum =0;
       int i;
       for(i=0;i<cars;i++){
                           sum = sum + array1[i];    
                           }
       if (sum == 0)
             return 1;
       else return 0;
    
    }
