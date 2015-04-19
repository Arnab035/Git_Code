#include<stdio.h>

int main(){
  int x,y,result,p,q,testcases;
  scanf("%d",&testcases);
  while(testcases-- > 0){
    scanf("%d %d",&x,&y);
    if(y>x)
       printf("No Number");
    else if((x-y) > 2)
       printf("No number");
    else if(((x-y)%2)!=0)
       printf("No number");
    else{ 
          if(x%2==0)
              printf("%d",x+y);
          else
              printf("%d",x+y-1);
         }
    }
      getch();
      return 0;
    }
