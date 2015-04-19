#include<stdio.h>
#include<math.h>

#define PI 3.14159265358

int main(){
	int testcases;
	int v,k1,k2;
	double b,x1;
	double angle,points;
	
	scanf("%d",&testcases);
	while(testcases-- > 0){
		scanf("%d %d %d",&v,&k1,&k2);
		if(k1!=0){
				b = (double)(k2/k1) ;
	        	x1 = (b + sqrt(pow(b,2) + 4))/ 2; 
	        	angle = atan(x1);
				printf("%.3f\n",angle);
		}
		else{
			angle = PI/2.00;
			printf("%.3f\n",angle);
		}
	
	}
	return 0;
}
