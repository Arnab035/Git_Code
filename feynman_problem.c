#include<stdio.h>

int main(){
    int grids,i;
    while(1){

    int squares =0;
    scanf("%d",&grids);
    if(grids==0) break;
    for(i=grids;i>=1;i--){
                          squares=squares + (i*i);
                          }
    printf("%d",squares);
}
    getch();
    return 0;
    
    }
