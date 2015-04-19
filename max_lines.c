#include<stdio.h>

int main(){
    int testcases,tests=1;
    long long int radius;
    double final;
    double max_length;
    unsigned long long sq_rad;
    scanf("%d",&testcases);
    while(tests<=testcases){
                      scanf("%lld",&radius);
                      sq_rad = (2*radius)*(2*radius);
                      final = sq_rad-0.25;
                      
                      max_length = final+ sqrt(sq_rad-final);
                      printf("Case %d: %.2lf\n",tests,max_length);
                      tests++;
                      }
    getch();
    return 0;
    }
