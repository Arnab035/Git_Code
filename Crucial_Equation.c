#include<stdio.h>

int find_hcf(int ,int );

int main(){
    int testcases;
    int a,b,c;
    int i = 1;
    int result;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%d %d %d",&a,&b,&c);
                      if(c%(find_hcf(a,b))==0){
                                               printf("Case %d: Yes\n",i);
                                               }
                      else{
                           printf("Case %d: No\n",i);
                           }
                      i++;
                      }
    getch();
    return 0;
    }
    
int find_hcf(int i,int j){
         int temp;
         if(i<=j){
                  temp = j%i;
                  while(temp!=0){
                                 j = i;
                                 i = temp;
                                 temp = j%i; 
                                 }
                  return i;
                  }
         else{
              temp = i%j;
              while(temp!=0){
                             i = j;
                             j = temp;
                             temp = i%j;
                             }
              return j;
              }
    }
