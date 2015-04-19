#include<stdio.h>

struct station{                         //structure describing the fuel station
       int distance;
       int fuel;
       };                       
       
int main(){
    int testcases;
    int numbers;
    int l,p;                              //l units away from town, p units of fuel with it
    scanf("%d",&testcases);
    while(testcases-- > 0){
                          scanf("%d",&numbers);
                          station stops[numbers];    //stops is an array of type struct station, it is an array of structures
                          for(i=0;i<numbers;i++){
                                                 scanf("%d %d",&stops[i].distance,&stops[i].fuel);
                                                 }
                          scanf("%d %d",&l,&p);
                          for(i=0;i<numbers;i++){
                                                 stops[i].distance = l-(stops[i].distance);
                                                 }
                          partition(stops,0,numbers-1);     //sort the array of structures based on distance
                          i = 0;
                          
                          while(i < numbers){
                                             if(i==0){
                                                      if(p >= stops[i].distance){
                                                                                count++;
                                                                                i++;
                                                                                p =  p - stops[i].distance + stops[i].fuel;
                                                                                m = p;
                                                                                }
                                                      else break;
                                                     }
                                             else{         //first element is considered
                                                  while(m <)
                                                  }
                                             
                                            }                          
                          }
    
    }

void partition(station array[],int low,int high){
     int mid;
     if(low < high){
            mid = (low+high)/2;
            partition(array,low,mid);
            partition(array,mid+1,high);
            merge_sort(array,low,mid,high);
            }
     }
     
void merge_sort(station array[],int low,int mid,int high){
     int i = low;
     int j = low;
     int k = mid+1;
     int m;
     station temp[10000];
     while((j<=mid)&&(k<=high)){
                                if(array[j].distance <= array[k].distance){
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
          for(m = j;m<=mid;m++){
                                temp[i] = array[m];
                                i++;
                                }
          }
     for(m = low;m<=high;m++){
                             array[m] = temp[m];
                             }
     }
