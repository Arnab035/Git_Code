#include<stdio.h>

int main(){
    unsigned long long testcases,students,sum,i;
    scanf("%llu",&testcases);
    while(testcases-- > 0){
                      scanf("%llu",&students);
                      sum = 0;
                      unsigned long long candy[students];
                      for(i=0;i<students;i++){
                                              scanf("%llu",&candy[i]);
                                              }
                      for(i=0;i<students;i++){
                                              sum =(sum+candy[i])%students;
                                              }
                      if(sum==0)
                            printf("YES\n");
                      else printf("NO\n");
                      }
    getch();
    return 0;
    }
