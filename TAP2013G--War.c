#include<stdio.h>

void partition(unsigned long long[] ,int ,int );

void merge_sort(unsigned long long[] ,int ,int ,int );

int main(){
    int soldiers;
    int battles;
    int j = 0,i;
    scanf("%d",&soldiers);
    unsigned long long quadradonia[soldiers];
    unsigned long long nlogonia[soldiers];
    for(i=0;i<soldiers;i++){
                            scanf("%llu",&quadradonia[i]);
                            }
    for(i=0;i<soldiers;i++){
                            scanf("%llu",&nlogonia[i]);
                            }
    partition(quadradonia,0,soldiers-1);
    partition(nlogonia,0,soldiers-1);
    battles = 0;
    for(i=0;i<soldiers;i++){
                            if(nlogonia[i] > quadradonia[j]){
                                           battles++;
                                           j++;
                                           }
                            }
    printf("%d\n",battles);
    getch();
    return 0;
    }
    
void partition(unsigned long long array[],int low,int high){
     int mid;
     if(low < high){
            mid = (low+high)/2;
            partition(array,low,mid);
            partition(array,mid+1,high);
            merge_sort(array,low,mid,high);
            }
     }
     
void merge_sort(unsigned long long array[],int low,int mid,int high){
     int i = low;
     int j = low;
     int k = mid+1;
     int m;
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
     if(j > mid){
          for(m = k;m<=high;m++){
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
     for(m=low;m<=high;m++){
                            array[m] = temp[m];
                            }
     }
