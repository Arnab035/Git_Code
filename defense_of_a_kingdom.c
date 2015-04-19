#include<stdio.h>

void partition(int[] ,int ,int );

void mergeSort(int[] ,int ,int ,int );

int main(){
    int testcases;
    int height,width,towers,i,j,max_x,max_y,difference;
    unsigned long long int maximum,run_calc;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                          max_x=0;
                          max_y=0;
                          scanf("%d %d %d",&width,&height,&towers);
                          int x_position[towers+2];
                          int y_position[towers+2];
                          x_position[0] = 0,y_position[0] = 0;
                          
                          
                          for(i=1;i<=towers;i++){
                                                scanf("%d %d",&x_position[i],&y_position[i]);
                                                }
                          x_position[towers+1] = width+1;
                          y_position[towers+1] = height+1;
                          partition(x_position,0,towers+1);       //sorts the two arrays
                          partition(y_position,0,towers+1);
                          for(i=0;i<towers+1;i++){
                                                  difference = x_position[i+1]-x_position[i];
                                                  if (difference>= max_x)
                                                        max_x = difference;
                                                  }
                          for(i=0;i<towers+1;i++){
                                                  difference = y_position[i+1]-y_position[i];
                                                  if (difference>= max_y)
                                                        max_y = difference;
                                                  }
                          maximum = (max_x-1)*(max_y-1);
                          printf("%llu\n",maximum);
                          
                          }
    getch();
    return 0;
    }

void partition(int array[],int low,int high){
     int mid;
     if(low<high){
                   mid = (low+high)/2;
                   partition(array,low,mid);
                   partition(array,mid+1,high);
                   mergeSort(array,low,mid,high);
                   }
     return;
     }
     
void mergeSort(int array[],int low,int mid,int high){
     int i=low,m;
     int temp[200000];
     int j=low,k=mid+1;
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
