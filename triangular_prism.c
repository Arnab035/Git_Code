#include<stdio.h>

int main(){
    int testcases;
    scanf("%d",&testcases);
    int volume;
    double side;
    double area;
    while(testcases-- > 0){
                      scanf("%d",&volume);
                      side = exp(log(4.00 * (double)volume)/3.00) ;
                      area = (sqrt(3.00)/2)* (side * side) + (4.00 * sqrt(3.00) * (double)volume)/(side) ;
                      printf("%.10f\n",area);
                      }
    getch();
    return 0;
    }
