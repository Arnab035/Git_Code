#include<stdio.h>

int main(void){
  int n;
  int i,j;
  int paths;
  scanf("%d",&n);
  char temp_arr[n][n+1];
  int arr[n][n];
  for(i=0;i<n;i++){
     scanf("%s",temp_arr[i]); 
  }
  
  for(i=0;i<n;i++){
  	for(j=0;j<n;j++){
  		arr[i][j] = temp_arr[i][j] - '0' ;
	  }
  }
  
  paths = calc_paths(0,0,n,arr);
  printf("%d",paths);
  getch();
  return 0;
}

int calc_paths(int a,int b,int c, int arr1[c][c]){
	int temp;
   if(a >= c){
   	   return 0;
   }
   else if(b >= c){
       return 0;
   }
   else if(arr1[a][b]==0){
       if(a==c-1 && b==c-1){
	        return 1;
	   }
	   else return 0;
   }
   else if(a==c-1 && b==c-1){
	        return 1;
	   }
   else{
        temp = calc_paths(a+arr1[a][b],b,c,arr1) + calc_paths(a,b+arr1[a][b],c,arr1);
   } 
   return temp;
}

