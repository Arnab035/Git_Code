#include<stdio.h>

char stack[2000];

int top=-1;

void push(char );

void pop();

int main(){
         char story[2000];
         int count,result,i,count1,testcases=1;
         while(1){
                  scanf("%s",story);
                  if(strstr(story,"-")!=NULL)                //strstr finds first occurence of one string within another string
                        break;
                   else{
                        count=0,count1=0;
                        for(i=0;story[i]!='\0';i++){
                                                    if(story[i]=='{'){
                                                                      push(story[i]);
                                                                      }
                                                    else{
                                                         if(top==-1)
                                                             push(story[i]);
                                                         else if(stack[top]=='{')
                                                             pop();
                                                         else
                                                             push(story[i]);
                                                         }
                                                    }
                        while(top!=-1){
                                       if(stack[top]=='}'){
                                                           pop();
                                                           count++;
                                                           }
                                       else{
                                            pop();
                                            count1++;
                                            }
                                       }
                        if(count%2==0){
                                       if(count1%2==0){
                                                       result = (count/2) + (count1/2);
                                                       printf("%d.%d\n",testcases,result);
                                                       }
                                       else{
                                            result = (count/2)+(count1/2)+1;
                                             printf("%d.%d\n",testcases,result);
                                            }
                                       }
                        else{
                             if(count1%2==0){
                                                       result = (count/2)+ 1 + (count1/2);
                                                        printf("%d.%d\n",testcases,result);
                                                       }
                                       else{
                                            result = (count/2)+(count1/2)+2;
                                             printf("%d.%d\n",testcases,result);
                                            }
                             }
                        
                        
                        }
                        testcases++;
                   }
    getch();
    return 0;
    }
    
void push(char a){
     if(top==2000)
          return;
     else{
          top++;
          stack[top]=a;
          return;
          }
     }
void pop(){
     char a;
     if(top==-1)
         return ;
     else
        a = stack[top--];
     return;
     }
