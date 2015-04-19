#include<stdio.h>

int main(){
    int testcases,slots,restaurants,i,j;
    unsigned long long max_profit,run_profit,max_profit_slot;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                           max_profit_slot = 0;
                           scanf("%d %d",&restaurants,&slots);
                           int waiters[restaurants][slots];
                           int customers[restaurants][slots];
                           unsigned long long int costs[restaurants][slots];
                           for(i=0;i<restaurants;i++){
                                                      for(j=0;j<slots;j++){
                                                                           scanf("%d",&waiters[i][j]);
                                                                           }
                                                      }
                                                      
                           for(i=0;i<restaurants;i++){
                                                      for(j=0;j<slots;j++){
                                                                           scanf("%d",&customers[i][j]);
                                                                           }
                                                      }
                           for(i=0;i<restaurants;i++){
                                                      for(j=0;j<slots;j++){
                                                                           scanf("%llu",&costs[i][j]);
                                                                           }
                                                      }
                           for(i=0;i<restaurants;i++){
                                                      max_profit = 0;
                                                      for(j=0;j<slots;j++){
                                                                           if(waiters[i][j]<=customers[i][j]){
                                                                                                              run_profit = waiters[i][j] * costs[i][j];
                                                                                                              if(run_profit>max_profit)
                                                                                                                    max_profit = run_profit;
                                                                                                              }
                                                                           else{
                                                                                run_profit = customers[i][j]*costs[i][j];
                                                                                if(run_profit>max_profit)
                                                                                                         max_profit = run_profit;
                                                                                }
                                                                           }
                                                      max_profit_slot = max_profit_slot + max_profit;
                                                      }
                           printf("%llu\n",max_profit_slot);
                          }
    getch();
    return 0;
    }
