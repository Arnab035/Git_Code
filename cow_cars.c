#include<stdio.h>

void partition(int[] ,int ,int );



void merge_sort(int[] ,int ,int ,int );

int main(){
    int cows,lanes,speed,min_speed,new_speed,i;
    int count = 0;
    scanf("%d %d %d %d",&cows,&lanes,&speed,&min_speed);
    int max_speed[cows];
    
    for(i=0;i<cows;i++){
                        scanf("%d",&max_speed[i]);
                        }
    partition(max_speed,0,cows-1);//sorts the car speeds
    int j=0;
    int cars[lanes];
    for(i=0;i<lanes;i++)
                        cars[i] = 0;
    for(i=0;i<cows;i++){
                        if(j < lanes){
                                      new_speed = max_speed[i] - (speed*cars[j]);
                                      if(new_speed >= min_speed){
                                                                 cars[j]++;
                                                                 j++;
                                                                 count++;
                                                                 }
                                      else
                                           continue;
                                      
                                      }
                        else {
                               j=0;
                               i--;
                             }
                                      
                       }
    printf("%d\n",count);
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
     int m;
     int i = low;
     int k = mid+1;
     int temp[50000];
     while(j<=mid && k<=high){
             if(array[j] <= array[k]){
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
          for(m=k;m<=high;m++){
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
     for(i=low;i<=high;i++){
                            array[i] = temp[i];
                            }
     }
