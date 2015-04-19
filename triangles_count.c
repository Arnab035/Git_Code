#include<stdio.h>
int main(){
    int level,i,testcases,n;scanf("%d",&testcases);
    while(testcases-- > 0){scanf("%d",&level);unsigned long long normal_t,reverse_t;if(level==1){printf("1\n");}
                      else{normal_t=(level*(level+1)*(level+2))/6;if(level%2==0){n = level/2; reverse_t=(n*(n+1)*(4*n-1))/6;}else{n = (level/2)+1;printf("%d\n",n);reverse_t = normal_t-(n*(n+1)*(4*n-1))/6;}printf("%llu\n",normal_t+reverse_t);}}return 0;}
