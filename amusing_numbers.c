#include<stdio.h>

int main(){
    int testcases,i,j;
    unsigned long long k;
    int array[100];
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%llu",&k);
                      k++;
                      i = 0;
                      while(k >= 1){
                                  array[i] = k%2;
                                  k = k/2;
                                  i++;
                                  }
                      for(j = i-2;j>=0;j--){
                                          if(array[j]==0)
                                                        printf("5");
                                          else printf("6");
                                          }
                      printf("\n");
                      }
    getch();
    return 0;
    }
