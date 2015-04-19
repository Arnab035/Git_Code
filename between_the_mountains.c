#include<stdio.h>

void partition(long int array[],int low,int high);


void mergeSort(long int array[],int low,int mid,int high);



int main(){
    int testcases,elem1,elem2,i,j,k;
    long int temp[2000];
    long int difference;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%d",&elem1);
                      long int array1[elem1];
                      for(i=0;i<elem1;i++){
                                           scanf("%ld",&array1[i]);
                                           }
                      scanf("%d",&elem2);
                      long int array2[elem2];
                      for(i=0;i<elem2;i++){
                                           scanf("%ld",&array2[i]);
                                           }
                      //merge sort both arrays
                      partition(array1,0,elem1-1);
                      partition(array2,0,elem2-1);
                      
                      difference = 1000000 ;
                      
                      i = 0;
                      j = 0;
                      while((i<elem1)&&(j<elem2)){
                                                  if(array1[i]<=array2[j]){
                                                                           if(difference > (array2[j]-array1[i])){
                                                                                         difference = array2[j]-array1[i];
                                                                                         }
                                                                           j++;
                                                                           }
                                                  else{
                                                       if(difference > (array1[i]-array2[j])){
                                                                     difference = array1[i]-array2[j];
                                                                     }
                                                                     i++;
                                                       }
                                                  }
                     
                           
                      
                     printf("%ld\n",difference);
    }
    
    getch();
    return 0;
}




void partition(long int array[],int low,int high){
     int mid;
     if(low<high){
                 mid = (low+high)/2;
                 partition(array,low,mid);
                 partition(array,mid+1,high);
                 mergeSort(array,low,mid,high);    
                 }
     return;
     }
     
void mergeSort(long int array[],int low,int mid,int high){
     int i = low;
     long int temp[1000];
     int k,a,b;
     a = low;
     b = mid+1;
     while((a<=mid)&&(b<=high)){
                                if(array[a]>=array[b]){
                                                       temp[i] = array[a];
                                                       a++;
                                                       }
                                else{
                                     temp[i] = array[b];
                                     b++;
                                     }
                                i++;
                                }
     if(a>mid){
               for(k=b;k<=high;k++){
                                    temp[i]=array[k];
                                    i++;
                                    }
               }
     else{
          for(k=a;k<=mid;k++){
                              temp[i]=array[k];
                              i++;
                             }
         }
      for(k=low;k<=high;k++){
                           array[k]=temp[k];
                            }
     }
