#include<stdio.h>

int min_x_aux(int ,int[] );

int perfect_sq(int );

int min(int ,int );

int r[1001];

int main(){
    int testcases,number,result,i;
    scanf("%d",&testcases);
    for(i=0;i<1001;i++){
                        r[i] = -1;
                        }
    while(testcases-- > 0){
                      scanf("%d",&number);
                      result = min_x_aux(number,r);
                      printf("%d\n",result);
                      }
    getch();
    return 0;
    }
    

int min_x_aux(int num,int arr[]){
    int i,q;
    if(arr[num-1]>=0)
          return arr[num-1];
    else if(num==0){
         q = 0;
         }
    else if(perfect_sq(num)){ 
         q = 1;
         }
    else{
         q = 999999999;
         for(i=1;i<=(num/2);i++){
                                q = min(q,min_x_aux(i,arr) + min_x_aux(num-i,arr));
                                }
         }
    arr[num-1] = q;
    return q;
    }
    
int perfect_sq(int num1){
    int temp;
    temp = (int)sqrt((double)num1);

    if(temp*temp == num1) return 1;
    else return 0;
}
    
int min(int a,int b){
    if(a<=b){
             return a;
             }
    else return b;
    }
