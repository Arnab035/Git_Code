#include<stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    
    int array[n][n];
    int sequence[n];
    for(i=0;i<n;i++){
                     for(j=0;j<n;j++){
                                      scanf("%d",&array[i][j]);
                                      }
                     }
    if(n!=2){
             sequence[n-1] = (array[0][n-1] - array[0][1] + array[1][n-1])/2  ;
             for(i=0;i<n-1;i++){
                                sequence[i] = array[i][n-1] - sequence[n-1];
                                printf("%d ",sequence[i]);
                                }
             printf("%d\n",sequence[n-1]);
             
             }
    else{
         sequence[0] = array[0][1]/2;
         sequence[1] = sequence[0];
         printf("%d %d\n",sequence[0],sequence[1]);
        }
    getch();
    return 0;
    }
