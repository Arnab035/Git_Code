#include<stdio.h>

int men[1000];
int women[1000];


void sort(int, int[] );

int main(){
     int testcases,i,j,number;
     scanf("%d",&testcases);
     while(testcases-- > 0){
                       int sum_hotness=0;
                       scanf("%d",&number);
                       for(i=0;i<number;i++){
                            scanf("%d",men+i);
                            
                            }
                       for(j=0;j<number;j++){
                            scanf("%d", women+j);
                            
                            }
                       sort(number,men);
                       sort(number,women);
                        
                       for(i=0;i<number;i++){
                                             sum_hotness = sum_hotness + (men[i]*women[i]);
                                             }
                       printf("%d\n",sum_hotness);
                       }   
     getch();
     return 0;
    }

void sort(int n,int arr[]){
     int temp,i,j;
     for(i=0;i<n-1;i++){
                           for(j=i+1;j<n;j++){
                                                   if(arr[i]<arr[j]){
                                                                    temp= arr[i];
                                                                    arr[i]= arr[j];
                                                                    arr[j] = temp; 
                                                                     }
                                                   }
                           }
     }
 
