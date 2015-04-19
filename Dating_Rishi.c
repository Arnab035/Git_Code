#include<stdio.h>

struct girl{
       unsigned long long height;
       int position; 
       };
       
void partition(struct girl[] , int ,int );

void merge_sort(struct girl[] , int ,int ,int );

unsigned long long minimum(unsigned long long ,unsigned long long );

int main(){
    int testcases,numbers,i,j;
    unsigned long long friendship,max_friendship;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                         max_friendship = 0;
                         scanf("%d",&numbers);
                         struct girl date[numbers];
                         struct girl sorted_date[numbers];
                         for(i=0;i<numbers;i++){
                                                scanf("%llu",&date[i].height);
                                                date[i].position = i;
                                                }
                         for(i=0;i<numbers;i++){
                                                sorted_date[i].height = date[i].height ;
                                                sorted_date[i].position = i;
                                                }
                         //sort the sorted_date array increasing order
                         partition(sorted_date,0,numbers-1);
                         int k = numbers;
                         int x = 0;
                         for(i=0;i<numbers;i++){
                                                j = date[i].position ;
                                                if(j >= (numbers/2)){
                                                                     if(sorted_date[i].height <= date[k].height){
                                                                                                                 friendship = sorted_date[i].height * (k-j);
                                                                                                                 if (friendship >= max_friendship)
                                                                                                                       max_friendship = friendship;
                                                                                                                 }
                                                                     else{
                                                                          
                                                                          }
                                                                     }
                                                }
                         
                       }
    getch();
    return 0;
    }
    
void partition(struct girl array[],int low,int high){
     int mid;
     if( low < high ){
                      mid = (low+high)/2;
                      partition(array,low,mid);
                      partition(array,mid+1,high);
                      merge_sort(array,low,mid,high);
                     }
     }
     
void merge_sort(struct girl array[],int low,int mid,int high){
     int i = low;
     int j = low;
     int k= mid+1;
     int m;
     struct girl temp[100000];
     while((j<=mid)&&(k<=high)){
                                if(array[j].height <= array[k].height){
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
          for(m =k;m<=high;m++){
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
     for(m = low;m<=high;m++){
           array[m] = temp[m];
           }
     }
     
unsigned long long minimum(unsigned long long a,unsigned long long b){
         if(a <= b)
             return a;
         else return b;
         }
