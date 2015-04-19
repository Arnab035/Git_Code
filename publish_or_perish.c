#include<stdio.h>


void mergeSort(int arr[],int low,int mid,int high);
void partition(int arr[],int low,int high);


int main(){
	int papers;
	int h_index,i;
	while(1){
		scanf("%d",&papers);
		if(papers==0) break;
		int citations[papers];
		for(i=0;i<papers;i++){
			scanf("%d",&citations[i]);
		}
		partition(citations,0,papers-1);  // sort the array
		
		
	    for(i=0;i<papers;i++){
	    	if((citations[i]==papers-i) || (citations[i]==papers-1-i)){
	    		h_index = citations[i];
	    		printf("%d\n",h_index);
	    		break;
			}
			else if(citations[i] > papers-i){
				h_index = papers-i;
				printf("%d\n",h_index);
				break;
			}
		}
	}
	return 0;
}

void partition(int arr[],int low,int high){

    int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}

void mergeSort(int arr[],int low,int mid,int high){

    int i,m,k,l,temp[100000];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
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
   
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}
