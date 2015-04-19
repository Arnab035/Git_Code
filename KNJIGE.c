#include<stdio.h>

struct book{
       int number;
       int position;
       };
       
void partition(struct book[] ,int ,int );

void merge_sort(struct book[] , int ,int ,int );

int main(){
    int qty,i;
    scanf("%d",&qty);
    struct book cabinet[qty];
    for(i=0;i<qty;i++){
                       scanf("%d",&cabinet[i].number);
                       cabinet[i].position = i;
                       }
    if(cabinet[0].number == qty){
                         printf("%d\n",qty-1);
                         }
    else if(cabinet[0].number == qty-1){
         printf("%d\n",qty-2);
         }
    else{
         //sort the cabinet array of structures
         partition(cabinet,1,qty-1);
         for(i=qty-1;i>cabinet[0].number;i--){
                                              if(cabinet[i].position < cabinet[i-1].position){
                                                                     printf("%d\n",i-1);
                                                                     break;
                                                                     }
         
                                                 
                                              }
        if(i==cabinet[0].number){
                                 printf("%d\n",(cabinet[0].number)-1);
                                 } 
        
         }
    getch();
    return 0;
    }
    
void partition(struct book array[],int low,int high){
     int mid;
     if(low < high){
            mid = (low+high)/2;
            partition(array,low,mid);
            partition(array,mid+1,high);
            merge_sort(array,low,mid,high);
            }
     }
     
void merge_sort(struct book array[],int low,int mid,int high){
     int i = low;
     int j = low;
     int k = mid+1;
     int m;
     struct book temp[300000];
     while((j <=mid)&&(k<=high)){
              if(array[j].number <= array[k].number){
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
