#include<stdio.h>

int convert_number(char[] );

char* convert_MCXI(int );

int main(){
    int testcases;
    char str1[10];
    char str2[10];
    char* str_result;
    int result;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%s %s",str1,str2);
                      result = convert_number(str1) + convert_number(str2) ;
    
                      str_result = convert_MCXI(result);
                      printf("%s\n",str_result);
                      }
    getch();
    return 0;
    }
    
int convert_number(char arr[]){
    int number = 0,i;
    
    //printf("%d",strlen(arr));
    
    for(i=0; i < strlen(arr);i++){
    
                                switch(arr[i]){
                                
                                                case 'm':
                                                     if(i==0){
                                                              number = number + 1000;
                                                              }
                                                     else{
                                                            i--;
                                                            number = number + (arr[i]-'0') * 1000;
                                                            i++;
                                                
                                                         }
                                                     break;
                                                case 'c':
                                                     if(i==0){
                                                              number = number + 100;
                                                              }
                                                     else{
                                                          i--;
                                                          if(arr[i]=='m'){
                                                                            number = number + 100;
                                                                           }
                                                          else{
                                                               number = number + (arr[i]-'0') * 100;
                                                               
                                                               }
                                                          i++;
                                                          }
                                                     break;
                                                case 'x':
                                                     if(i==0){
                                                              number = number+10;
                                                              
                                                              }
                                                     else{
                                                          i--;
                                                          if(arr[i]=='m'||arr[i]=='c'){
                                                                                           number = number+10;
                                                                                            
                                                                                           }
                                                          else{
                                                               number = number +(arr[i]-'0')*10;
                                                                
                                                               }
                                                          i++;
                                                          }
                                                     break;
                                                case 'i':
                                                     if(i==0){
                                                              number = number + 1;
                                                              
                                                              }
                                                     else{
                                                          i--;
                                                          if(arr[i]=='m'||arr[i]=='c'||arr[i]=='x'){
                                                                                                          number = number+1;
                                                                                                          }
                                                          else{
                                                               number = number + (arr[i]-'0') * 1;
                                                              }
                                                          i++;
                                                          }
                                                     break;
                                                 default:
                                                     break;
                                                }
                                //printf("%d",i);
                               }
      return number;
    }
   
char* convert_MCXI(int a){
       char* str1 = (char *)malloc(10* sizeof(char));
       int j = 0;
       int i = 1000,b;
       while(i!=0){
                   b = a/i;
                   if(b==0){
                            //do nothing
                            }
                   else if(b==1){
                        if(i==1000){
                                    str1[j++] = 'm';
                                    }
                        else if(i==100){
                             str1[j++] = 'c';
                             }
                        else if(i == 10){
                             str1[j++] = 'x';
                             }
                        else{
                             str1[j++] = 'i';
                             }
                        } 
                   else{
                        if(i==1000){
                                    str1[j++] = (char)(((int)'0')+b);
                                    str1[j++] = 'm';
                                    }
                        else if(i==100){
                             str1[j++] = (char)(((int)'0')+b);
                             str1[j++] = 'c';
                             }
                        else if(i == 10){
                             str1[j++] = (char)(((int)'0')+b);
                             str1[j++] = 'x';
                             }
                        else{
                             str1[j++] = (char)(((int)'0')+b);
                             str1[j++] = 'i';
                             }
                        
                        }
                   a = a%i;
                   i = i/10;
                   }
       str1[j]='\0';
       return str1;
       }

