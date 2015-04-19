#include<stdio.h>

int add(char first,char second){
	int s=0;
	if(first=='R'&& second=='R') s+=1;
	else if(first=='R' && second=='S') s+=2;
	else if(first=='S' && second=='S') s+=1;
	else if(first=='S' && second=='P') s+=2;
	else if(first=='P' && second=='P') s+=1;
	else if(first=='P' && second=='R') s+=2;
	return s;
}

int score(char* a, char* b,int r){
	int i,t = 0;
	for(i=0;i<r;i++){
		t += add(a[i],b[i]);
	}
	return t;
}

int main(){
	int r,f,i,j,exact,k,max,res;
	char sven[52],p[]="RPS";
	char friends[52][52];
	scanf("%d%s%d",&r,sven,&f);
	exact = 0;
	for(i=0;i<f;i++){
		scanf("%s",friends[i]);
		exact += score(sven,friends[i],r);
	}
	printf("%d\n",exact);
	exact = 0;
	for(i=0;i<r;i++){
		max = 0;
		for(j=0;j<3;j++){
			res = 0;
			for(k=0;k<f;k++){
				res += add(p[j],friends[k][i]);
			}
			if(res>max) max=res;
		}
		exact += max;
	}
	printf("%d\n",exact);
	return 0;
}

