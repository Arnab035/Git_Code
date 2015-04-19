#include<stdio.h>

int main(){
    int testcases;
    unsigned long long int n,k,t,f,i,j;     
    unsigned long long int empty,result;               
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      int n,k,t,f;
                      scanf("%d%d%d%d",&n,&k,&t,&f);
                      printf("%d\n",(f-n)/(k-1)+f);         //formula used to calculate empty boxes
}
getch();
return 0;
}
