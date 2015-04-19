#include<stdio.h>

int main(){
	int r, f,i,j;
	int score;
	int s,p,r1;
	scanf("%d",&r);
	char game[r+1];
	scanf("%s",game);
	scanf("%d",&f);
	char friends_game[f][r+1];
	for(i=0;i<f;i++){
		scanf("%s",friends_game[i]);
	}
	score = 0;
	for(i=0;i<r;i++){
		for(j=0;j<f;j++){
			if(game[i]==friends_game[j][i]){
				score += 1;
			}
			else if((game[i]=='S'&&friends_game[j][i]=='P')||(game[i]=='P'&&friends_game[j][i]=='R')||(game[i]=='R'&&friends_game[j][i]=='S')){
					score += 2;
				}
			else score += 0;
		}
	}printf("%d\n",score);int max_score, sum_score=0 ;for(i=0;i<r;i++){max_score = 0;s=p=r1= 0;for(j=0;j<f;j++){if(friends_game[j][i]=='S')s++ ;else if(friends_game[j][i]=='R'){r1++ ;}else p++;}if(s>=r1){if(s>=p){if(s==p && r1<p) max_score=2*s+p;else max_score=2*s+r1;}else{max_score=2*p+s;}}else{if(r1>=p){max_score=2*r1+p;}else{max_score=2*p+s;}}sum_score+=max_score;}printf("%d\n",sum_score);return 0;}
