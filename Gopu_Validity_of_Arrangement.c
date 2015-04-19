#include<stdio.h>

int main(){
    int testcases;
    long int numbers,i;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%ld",&numbers);
                      long int arr[numbers];
                      for(i=0;i<numbers;i++){
                                             scanf("%ld",&arr[i]); 
                                             }
                      for(i=0;i<numbers;i++){
                                             if(arr[i]>i){
                                                          printf("NO\n");
                                                          break;
                                                          }
                                             }
                      if(i==numbers){
                                     printf("YES\n");
                                     }
                      }
    getch();
    return 0;
    }
