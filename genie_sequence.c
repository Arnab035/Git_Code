#include<stdio.h>

int main(){
	int testcases,elements,i;
	
	scanf("%d",&testcases);
	while(testcases-- > 0){
		scanf("%d",&elements);
		int arr[elements];
		for(i=0;i<elements;i++){
			scanf("%d",&arr[i]);
		}
		for(i=0;i<elements;i++){
			if(arr[i]>=elements || arr[i]==0){
				printf("NO\n");
				break;
			}
		}
		if(i< elements) continue;
		int arr2[elements];
		for(i=0;i<elements;i++){
			arr2[i] = 0;
		}
		for(i=0;i<elements;i++){
			arr2[arr[i]]++;
		}
		if(elements%2==0){
		    for(i=1;i<elements;i++){
                if(arr2[i] > 2){
                	printf("NO\n");
                	break;
				}
				else if((arr2[i]+arr2[elements-1-i]) > 2 ){
					printf("NO\n");
					break;
				}			
		    }
				if(i==elements) printf("YES\n");	
		}
	
		else{
			if(arr2[elements/2] > 1){
				printf("NO\n");
			}
			else{
				for(i=1;i<elements;i++){
				if(arr2[i] > 2){
					printf("NO\n");
					break;
				}
				else if((arr2[i]+arr2[elements-1-i]) > 2){
					printf("NO\n");
					break;
				} 
			}
			if(i==elements) printf("YES\n");
			}
		
		}
		
	}
	return 0;
}
