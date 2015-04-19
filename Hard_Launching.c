#include<stdio.h>

int main(){
    int testcases;
    int i=1;
    int distance,speed;
    double res,result;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%d %d",&distance,&speed);
                      res = (distance * (9.806))/(speed * speed);
                      if(res > 1 || res < -1){
                                              printf("Scenario #%d:-1\n",i);
                                              continue;
                                              }
                      result = (asin(res)/2.0) * (180.0/(2* acos(0.0)));
                      if(result > 45.00){
                                printf("Scenario #%d:-1\n",i);
                                continue;
                                }
                      printf("Scenario #%d:%.2f\n",i,result);
                      i++;
                      }
    getch();
    return 0;
    
    }
