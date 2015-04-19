#include<stdio.h>

int main(){
    int testcases,towers,people,health_decrement,i,j,temp;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%d %d %d",&people,&towers,&health_decrement);
                      int health[people];
                      for(i=0;i<people;i++){
                                            scanf("%d",&health[i]);
                                            }
                      for(i=people-1;i>=1;i--){
                                               for(j=0;j<i;j++){
                                                                if(health[j] < health[j+1]){
                                                                             temp = health[j+1];
                                                                             health[j+1] = health[j];
                                                                             health[j] = temp;
                                                                             }
                                                                }
                                               }
                      i=1;
                      j=0;
                     while(i<=towers){
                                      do{
                                         health[j]= health[j]-health_decrement;
                                        
                                         if(health[j]<=0){
                                                          printf("NO\n");
                                                          break;
                                                          } 
                                           i++;     
                                         }while(health[j]>health_decrement);
                                         if(health[j]<=0)
                                              break;
                                         j++;
                                      }
                     if(i>towers){
                                  printf("YES\n");
                                  }
                      }
    getch();
    return 0;
    
    }
