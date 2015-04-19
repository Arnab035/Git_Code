#include<stdio.h>

void merge_sort(int array[],int low,int mid,int high){
	int i,m,k,l,temp[100000];
	l=low;
	m= mid+1;
	i=low;
	while((l<=mid)&& (m<=high)){
		if(array[l] <= array[m]){
			temp[i] = array[l];
			l++;
		}
		else{
			temp[i] = array[m];
			m++;
		}
		i++;
	}
	if(l>mid){
		for(k=m;k<=high;k++){
			temp[i] = array[k];
			i++;
		}
		
	}
	else{
		for(k=l;k<=mid;k++){
			temp[i] = array[k];
			i++;
		}
	}
	for(k = low;k<=high;k++){
		array[k] = temp[k];
	}
}

void partition(int array[],int low, int high){
	int mid;
	if(low < high){
		mid = (low + high)/2;
		partition(array,low,mid);
		partition(array,mid+1,high);
		merge_sort(array,low,mid,high);
	}
	return ;
	
}

int main(){
	int testcases,elements,i,j;
	scanf("%d",&testcases);
	while(testcases-- > 0){
		scanf("%d",&elements);
		int arr[elements];
		for(i=0;i<elements;i++){
			scanf("%d",&arr[i]);
		}
		partition(arr,0,elements-1);   //sort the array
		if(elements%2==0){
			for(i=0;i<elements-1;i++){
				if(arr[i]!=arr[i+1]){
					printf("%d\n",elements-1);
					break;
				}
			}
			if(i==elements-1){
				printf("%d\n",elements);
			}
		}
		else{
			j = elements/2 ;
			for(i=0;i<j;i++){
				if((arr[j]-arr[i]) != (arr[elements-1-i]-arr[j])){
					printf("%d\n",elements-1);
					break;
				}
			}
			if(i==j){
				printf("%d\n",elements);
			}
		}
		
	}
	return 0;
}
