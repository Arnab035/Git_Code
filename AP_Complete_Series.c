#include<stdio.h>

int main(){
    long long term_3, term_last3, numbers,a;
    unsigned long long sum;
    long long terms,i;
    int testcases,difference;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%lld %lld %llu",&term_3,&term_last3,&sum);
                      terms = (2*sum)/(term_3+term_last3);
                      printf("%lld\n",terms);
                      difference = (term_last3-term_3)/(terms-5);
                      numbers = term_3-(difference*2);
                      for(i=0;i<terms;i++){
                                           a = numbers+(difference*i);
                                           printf("%lld ",a);
                                           }
                      printf("\n");
                      }
    getch();
    return 0;
    }
