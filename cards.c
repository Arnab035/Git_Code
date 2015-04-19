#include<stdio.h>

int main(){
    int count;
    float length,sum;
    
              while(1)           
                     {
                      sum= 0.000;                     
                      scanf("%4f",&length);
                      if(length==0.00)
                            break;
                      float count=2.00;
                      int number=0;
                      while(sum<=length){
                                         sum = sum + (1/count);
                                         
                                         count++;
                                         number++;
                                         }
                      printf("%d card(s)",number);
                      printf("\n");
                      
                      }
    getch();
    return 0;
    
    }
