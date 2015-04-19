#include<stdio.h>
#include<math.h>

int main(){
    int testcases;
    int radius;
    double volume;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                          scanf("%d",&radius);
                          volume = 8*(2-sqrt(2))*pow((float)radius,3.00);
                          printf("%.4lf\n",volume); 
                          }
    getch();
    return 0;
    }
