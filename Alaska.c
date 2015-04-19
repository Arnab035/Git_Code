#include<stdio.h>

void partition(int[] ,int ,int );

void merge_sort(int[] ,int ,int ,int );

int main(){
    int stations;
    int i;
    while(1){
             scanf("%d",&stations);
             if(stations==0) break;
             int charge[stations];
             for(i=0;i<stations;i++){
                                     scanf("%d",&charge[i]);
                                     }
             //sort the array charge
             partition(charge,0,stations-1);
             for(i=1;i<stations;i++){
                                     if(i==stations-1){
                                                       if((2*(1422-charge[i])) > 200){
                                                                               printf("IMPOSSIBLE\n");
                                                                               break;
                                                                               }
                                                       }
                                     else{
                                          if((charge[i]-charge[i-1]) > 200){
                                                                            printf("IMPOSSIBLE\n");
                                                                            break;
                                                                            }
                                          }
                                     }
             if(i==stations){
                             printf("POSSIBLE\n");
                             }
             }
    getch();
    return 0;
    }
    
void partition(int array[],int low,int high){
     int mid;
     if(low < high){
                   mid = (low+high)/2;
                   partition(array,low,mid);
                   partition(array,mid+1,high);
                   merge_sort(array,low,mid,high);
                   }
     }
     
void merge_sort(int array[],int low,int mid,int high){
     int j = low;
     int i = low;
     int k = mid+1;
     int temp[1423];
     int m;
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
     if(j>mid){
               for(m = k;m<=high;m++){
                                     temp[i] = array[m];
                                     i++;
                                     }
               }
     else{
          for(m = j;m<=mid;m++){
                               temp[i] = array[m];
                               i++;
                               }
          }
     for(m = low;m<=high;m++){
                             array[m] = temp[m];
                             }
     }
