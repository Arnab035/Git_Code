#include<stdio.h>

int main(){
    int squares ;
    scanf("%d",&squares);
    int rectangles,i,j;
    rectangles = 0;
    for(i=2;i<=sqrt(squares);i++){
                                 for(j=i;j>=i;j++){
                                                   if((i*j)>squares)
                                                       break;
                                                   else rectangles++;
                                                   }
                                 }
    printf("%d",rectangles+squares);
    
    getch();
    return 0;
}
