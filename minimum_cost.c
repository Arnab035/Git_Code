#include<stdio.h>
#include<string.h>

int main(){
	char first[1001],second[1001];
	int len1,len2;
	int min_cost;
	int i,j;
	while(1){
		scanf("%s",first);
		if(first[0]=='#') break;
		scanf("%s",second);
		len1 = strlen(first);
		len2 = strlen(second);
		int count[len1+1][len2+1];
		for(i=0;i<=len1;i++){
			count[i][0] = 0;
		}
		for(i=0;i<=len2;i++){
			count[0][i] = 0;
		}
		for(i=1;i<=len1;i++){
			for(j=1;j<=len2;j++){
				if(first[i-1]==second[j-1]){
					count[i][j] = count[i-1][j-1] + 1;
				}
				else{
					if(count[i-1][j] >= count[i][j-1]){
						count[i][j] = count[i-1][j];
					}
					else count[i][j] = count[i][j-1];
				}
			}
		}
		min_cost = (len1-count[len1][len2]) * 15 + (len2-count[len1][len2]) * 30 ;
	    printf("%d\n",min_cost);
	}
	return 0;
}
