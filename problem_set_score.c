#include<stdio.h>
#include<math.h>

int main(){
	int testcases;
	int k =1;
	int teams,problems,i,j;
	scanf("%d",&testcases);
	while(testcases-- > 0){
		scanf("%d %d",&teams,&problems);
		int array[teams][problems];
		for(i=0;i<teams;i++){
			for(j=0;j<problems;j++){
				scanf("%d",&array[i][j]);
			}
		}
		int result[3];
		for(i=0;i<3;i++){
			result[i] = 0;
		}
		for(i=0;i<problems;i++){
			for(j=0;j<teams;j++){
				if(array[j][i]==1){
					break;
				}
				   
			}
			if(j==teams){
				result[0] = 0;
				break;
			}
		}
		if(i==problems){
			result[0] = 1;
		}
		for(i=0;i<teams;i++){
			for(j=0;j<problems;j++){
				if(array[i][j]==1){
					break;
				}
			}
			if(j==problems){
				result[1] = 0;
				break;
			}
		}
		if(i==teams){
			result[1] =1 ;
		}
		for(i=0;i<teams;i++){
			int sum = 0;
			for(j=0;j<problems;j++){
				if(array[i][j]==1){
					sum++;
				}
				   
			}
			if(sum==problems){
				result[2] = 0;
				break;
			}
		}
		if(i==teams){
			result[2] = 1;
		}
		int score = 0;
		for(i=0;i<3;i++){
			score += result[2-i] * (int)pow(2,i) ;
		}
	    printf("Case %d: %d\n",k,score);
		k++;
		
	}
	return 0;
}
