#include<stdio.h>

void push(int );

int pop(void);

int top=-1;
int number;

int stack[1000];

int main(){
    int i,a,j;
    while(1){
    scanf("%d",&number);
    if(number==0)
       break;
    else{
    int vehicle[number];
    
    int reorder_vehicle[number];
    for(i=0;i<number;i++){
                          scanf("%d",&vehicle[i]);
                          }
    i=0;
    while(vehicle[i]!=1){
                         push(vehicle[i]);
                         i++;
                         }
    reorder_vehicle[0]= vehicle[i];
    a=2;
    for(j=i;j<number-1;j++){
                          if(vehicle[j+1]==a){
                                              reorder_vehicle[a-1] = a;
                                              a++;
                                              }
                          else if(stack[top]==a){
                                                 reorder_vehicle[a-1]=pop();
                                                 a++;
                                                 j--;
                                                 }
                          else{
                               push(vehicle[j+1]);
                               continue;
                               }
                          }
    while(top!=-1){
                   reorder_vehicle[a-1]=pop();
                   a++;
                   }
    for(i=0;i<number-1;i++){
                          if((reorder_vehicle[i+1]-reorder_vehicle[i])!=1){
                                                                           printf("NO\n");
                                                                           break;
                                                                           }                        
                          }
    if(i==number-1){
                    printf("YES\n");
                    }
    }
}
    getch();
    return 0;
    
    }
    
void push(int a){
     if(top==number){
                     return;
                     }
     else{
          top++;
          stack[top]=a;
          
          }
     
     }
     
int pop(){
    int a;
    if(top==-1){
                return 0;
                }
    else{
         a = stack[top--];
         return a;
         }
    
    }
