#include<stdio.h>

int main(){
    unsigned long long beehive,total,i;
    while(1){
             scanf("%llu",&beehive);
             if(beehive==-1){
                             break;
                             }
             else{
                if(beehive==1)
                  printf("Y\n");
                else{
                  total=1;
                  i=6;
                  while(total<=beehive){
                                        if(total==beehive){
                                                           printf("Y\n");
                                                           break;
                                                           }
                                        else{
                                             
                                             total = total + i;
                                             i+=6;
                                             }
                                        }
                  if(total>beehive){
                                    printf("N\n");
                                    }
                      }
                }
          }
    getch();
    return 0;
    }
