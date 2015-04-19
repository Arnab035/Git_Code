#include<stdio.h>

void partition(int[] ,int ,int );

void mergeSort(int[] ,int ,int ,int );

int main(){
    int testcases,count_pairs,sum;
    int friends,price,i,j;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      count_pairs = 0;
                      scanf("%d %d",&friends,&price);
                      int money[friends];
                      for(i=0;i<friends;i++){
                                             scanf("%d",&money[i]);
                                             }
                      //sort the money array in increasing order
                      partition(money,0,friends-1);
                      i =0;
                      j = friends-1;
                      while(i<j){
                                 sum = money[i]+money[j];
                                 if(sum < price){
                                        i++;
                                        }
                                 else if(sum > price){
                                      j--;
                                      }
                                 else{
                                      count_pairs++;
                                      i++;
                                      j--;
                                      }
                                 } 
                      printf("%d\n",count_pairs);
                      }
    getch();
    return 0;
    }
    
void partition(int array[],int low,int high){
     int mid;
     if(low<high){
                  mid = (low+high)/2 ;
                  partition(array,low,mid);
                  partition(array,mid+1,high);
                  mergeSort(array,low,mid,high);
                  }
     return;
     }
     
void mergeSort(int array[],int low,int mid,int high){
     int i = low;
     int m;
     int j = low,k = mid+1;
     int temp[100000];
     while((j<=mid)&&(k<=high)){
                                if(array[j]<=array[k]){
                                                       temp[i] = array[j];
                                                       j++;
                                                       }
                                else{
                                     temp[i] = array[k];
                                     k++;
                                     }
                                i++;
                                }
     if(j> mid){
           for(m = k; m <= high;m++){
                 temp[i] = array[m];
                 i++;
                 }
           }
     else{
          for(m=j;m<=mid;m++){
                              temp[i] = array[m];
                              i++;
                              }
                              
          }
     for(i= low;i<=high;i++){
            array[i] = temp[i];
            }
            
     }
     
     
