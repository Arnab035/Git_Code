#include<stdio.h>
#include<math.h>

int main(){
	int velocity, height;
	double result;
	while(1){
		scanf("%d %d",&velocity,&height);
		if(velocity==-1 && height==-1)
		      break;
		else{
			if(height==0){
				result = (velocity * velocity)/ 9.8 ;
				printf("%.6f\n",result);
			}
			else{
				result = (velocity/9.8)  * sqrt((velocity * velocity) + (2 * 9.8 * height));
				printf("%.6f\n",result);
			}
		}
		
	}
	getch();
	return 0;
	
}
