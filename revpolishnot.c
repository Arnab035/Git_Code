#include<stdio.h>


void push(char );

char pop();

char stack[400];
int top=-1;


int main(){
     char ch;
     int i,testcases,len;
     char symbols[400];
     scanf("%d\n",&testcases);
     while(testcases-- > 0){
         
         scanf("%s",symbols);
         len= strlen(symbols);
         
          for(i=0;i<len;i++){
             switch(symbols[i]){
                case '(':
                   push(symbols[i]);
                   break;
                case ')':
                while(stack[top]!='('){
                ch = pop();
                printf("%c",ch);
                }
                char chdump = pop();
                break;
                case '+':
                while(top!=-1){
                if(stack[top]=='('){
                   push(symbols[i]);
                   break;
                }
                else{
                    ch=pop();
                    printf("%c",ch);
                    }
                    }
                if(top==-1)
                    push(symbols[i]);
                
                   break;
              
                    
                case '-':
                while(top!=-1){
                if(stack[top]=='('||stack[top]=='+'){
                   push(symbols[i]);
                   break;
                   }
                else{
                    ch=pop();
                    printf("%c",ch);
                    }
                   }
                  if(top==-1)
                    push(symbols[i]);
                   break;
                
                case '*':
                while(top!=-1){
                if(stack[top]=='('||stack[top]=='+'||stack[top]=='-'){
                   push(symbols[i]);
                   break;
                   }
                else{
                    ch=pop();
                    printf("%c",ch);
                    }
                   }
                if(top==-1)
                    push(symbols[i]);
                   break;
                   
                case '/':
                while(top!=-1){
                if(stack[top]=='('||stack[top]=='+'||stack[top]=='-'||stack[top]=='*'){
                   push(symbols[i]);
                   break;
                   }
                else{
                    ch=pop();
                    printf("%c",ch);
                    }
                   }
                if(top==-1)
                    push(symbols[i]);
                   break;
                   
                case '^':
                while(top!=-1){
                if(stack[top]=='('||stack[top]=='+'||stack[top]=='-'||stack[top]=='*'||stack[top]=='/'){
                   push(symbols[i]);
                   break;
                   }
                else{
                    ch=pop();
                    printf("%c",ch);
                    }
                   }
                if(top==-1)
                    push(symbols[i]);
                   break;
                default :
                     printf("%c",symbols[i]);
                     break;
                 
                 } 
                  
     }
      while(top!=-1)
           printf("%c",pop());
     }
    getch();
    return 0;
         
}

void push(char s){
     if(top==400){
         printf("Stack Overflow");
         return;
         }
     else  
         stack[++top]=s;
     }
     
char pop(){
     char result='0';
     if(top==-1){
         printf("Stack Underflow");
         
         }
     else
         result = stack[top--];
      return result;
     
     }
