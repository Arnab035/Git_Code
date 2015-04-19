#include<stdio.h>

int main(){
    int testcases;
    unsigned long long int n,k,t,f,i,j;     
    unsigned long long int empty,result;               
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      
                      scanf("%llu%llu%llu%llu",&n,&k,&t,&f);
                      empty=n;
                      
                      for(i=1;i<=n;i++){              
                                             for(j=1;j<=k;j++){
                                                               empty = (n-i)+((k*k)*(i-1))+(j*k)+(k-j);
                                                               
                                                               if(empty==f){
                                                                            result = (n-i)+(1+k+(k*j))+((1+k+(k*k))*(i-1));
                                                                            printf("%llu\n",result);
                                                                            break;
                                                                            }
                                                              }
                                             if(empty==f)
                                                       break;
                                             }
                                      
                          }
                      
     getch();
     return 0;
    }
