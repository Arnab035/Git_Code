#include<stdio.h>

int main(){
    int boys,girls,gender_regular,counter,i;
    while(1){
    scanf("%d %d",&girls,&boys);
    counter=1,i=1;
    if(girls==-1 && boys==-1)
         break;
    else if(boys==0)
        gender_regular = girls;
    else if(girls==0)
         gender_regular = boys;
    else if(boys==girls || abs(boys-girls)==1)
         gender_regular = 1;
    else{
         if(boys> girls){
                  
                  while(counter < boys){
                                counter = (girls+1)*i;
                                i++;
                                }
                  
                  if(counter>=boys)
                     gender_regular = i-1;
                  }
         else{
                  while(counter < girls){
                                counter = (boys+1)* i;
                                i++;
                                //printf("%d %d\n",counter,i);
                                }
                  if(counter>=girls)
                     gender_regular = i-1;
                  
                  }
         }
          printf("%d\n",gender_regular);
    }
         getch();
         return 0;
    }
