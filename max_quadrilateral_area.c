#include<stdio.h>

//to calculate the maximum quadrilateral area, use the Brahmagupta formula

int main(){
    int testcases;
    double result,a,b,c,d;
    double semi_perimeter;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%lf %lf %lf %lf",&a,&b,&c,&d);        //to read double in C , use %lf format specifier //
                      semi_perimeter = (a+b+c+d)/2.00 ;
                      result = sqrt((semi_perimeter-a)*(semi_perimeter-b)*(semi_perimeter-c)*(semi_perimeter-d));
                      printf("%.2f\n",result);
                      }
    getch();
    return 0;
    }
