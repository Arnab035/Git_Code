#include<stdio.h>

void partition(unsigned long long[] ,int ,int );

void merge_sort(unsigned long long[] ,int ,int ,int );

int main(){
    int students,play_students,i,j;
    int testcases;
    unsigned long long temp,minimum;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%d %d",&students,&play_students);
                      unsigned long long height[students];
                      for(i=0;i<students;i++){
                                              scanf("%llu",&height[i]);
                                              }
                     //use merge sort to sort the array in O(nlogn) time
                     
                      partition(height,0,students-1);
                      //for(i=0;i<students;i++)
                            //printf("%llu ",height[i]);
                      minimum = 1000000000;
                      if(play_students==1){
                                           printf("0\n");
                                           }
                      else{
                           for(i=0;i<=(students-play_students);i++){
                                                                      if((height[i]-height[i+(play_students-1)])< minimum)
                                                                             minimum = height[i]-height[i+(play_students-1)]; 
                                                                                                      
                                                                    }
                           printf("%llu\n",minimum);
                           }
                      }
     getch();
     return 0;
    }
    
void partition(unsigned long long arr[],int low,int high){
     int mid;
     if(low<high){
                     mid = (low+high)/2 ;
                     partition(arr,low,mid);
                     partition(arr,mid+1,high);
                     merge_sort(arr,low,mid,high);
                     }
     return;
     }
     
void merge_sort(unsigned long long arr[],int low,int mid,int high){
     unsigned long long temp[20000];
     int l = low;
     int k;
     int i = low;
     int m = mid+1;
     while((l<=mid) && (m<=high))
     { 
                    if(arr[l] >= arr[m]){
                              temp[i] = arr[l];
                              l++;
                              }
                    else{
                         temp[i] = arr[m];
                         m++;
                         }
                    i++;
     }
     if(l>mid){
                for(k=m;k<=high;k++){
                                     temp[i]=arr[k];
                                     i++;
                                     }
                }
     else{
                for(k=l;k<=mid;k++){
                                     temp[i]=arr[k];
                                     i++;
                                     }
         }
     for(i=low;i<=high;i++){
                            arr[i] = temp[i] ;
                            }
     return;               
   }
     
