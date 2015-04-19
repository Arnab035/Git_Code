#include<stdio.h>
#include<math.h>

int main(){
    int testcases,scenario=1;
    int p_init,p_timet,t,p;            //p0 is the initial value, p1 is the value after time t, t is the time, p is the final value
    double result_time,constant,logart;       
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%d %d %d %d",&p_init,&p_timet,&t,&p);
                      logart = log ((double)p_timet/(double)p_init);
                      
                      constant = logart/t;
                      
                      result_time = (log ((double)p/(double)p_init))/constant ;
                      printf("Scenario #%d: %.2f\n",scenario,result_time);
                      scenario++;
                      }
    getch();
    return 0;
    }
