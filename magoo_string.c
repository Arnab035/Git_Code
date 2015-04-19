#include<stdio.h>

int main(){
    int testcases;
    unsigned long long m,n,count,min,max,i;
    char string_a[100000];
    
    
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%s",string_a);
                      char *p = string_a;        
                      
                      scanf("%llu %llu",&m,&n);
                      char store[m+1];
                      for(i=0;i<m;i++){
                                       store[i]='a';
                                       }
                      store[m]='\0';
                      count=0;
                    
                                while ( *p!='\0' && (p = strstr(p,store))) 
                                    {
                                      ++count;
                                      p+=m;
                                     // printf("%s\n",*p);
                                     }
                    
                      
                      
                        
                       // printf("%d\n",count);
                      if(n>=m){
                             min = strlen(string_a);
                             max = strlen(string_a)+(n-m)*count;
                             printf("%llu %llu\n",min,max);
                             }
                      else{
                           max = strlen(string_a);
                           min =strlen(string_a)+(n-m)*count;
                           printf("%llu %llu\n",min,max);
                           }
                      }
    getch();
    return 0;
    }
