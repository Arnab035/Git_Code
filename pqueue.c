#include<stdio.h>

struct job{
       int priority;
       int position;
       };
       
struct job collections[100];

int numbers,jobs;

int top=-1;

int main(){
     int testcases;
     int time;
     scanf("%d",&testcases);
     
     while(testcases-- > 0){
                       time = 0;
                       scanf("%d %d",&numbers,&jobs);
                       for(i=0;i<numbers;i++){
                                              scanf("%d",&collections[i].priority);
                                              collections[i].position = i;
                                              }
                       while(1){
                                i = collections[0].priority;
                                if(collections[0].position==jobs){
                                        if(highest_priority(i)){
                                                                pop();
                                                                time++;
                                                                break;                                                       
                                                                }
                                        else{
                                              insert(collections[0]);
                                             }
                                }
                       }     
    }
