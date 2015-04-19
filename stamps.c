#include<stdio.h>

int main(){
    int testcases, loop_count=1;
    int i,j,temp;
    scanf("%d",&testcases);
while(loop_count<=testcases){
    long int borrow;
    int friends;
    scanf("%ld %d", &borrow, &friends );
    int stamps[friends];
    for(i=0;i<friends;i++)
       scanf("%d",&stamps[i]);
    for(i=friends-1;i>=1;i--){
                              for(j=0;j<=i-1;j++){
                                                 if(stamps[j]< stamps[j+1]){
                                                       temp = stamps[j+1];
                                                       stamps[j+1] = stamps[j];
                                                       stamps[j] = temp;
                                                     }
                                                 }
                              }
   /* for(i=0;i<friends;i++){
                           printf("%d\n",stamps[i]);
                           }*/
    for(i=0;i<friends;i++){
                           borrow-=stamps[i];
                           if(borrow<=0){
                                         break;
                                         }
                           }
    printf("Scenario #%d:\n",loop_count+1);
    if(i==friends)
        printf("impossible\n");
    else printf("%d\n",i+1);
    printf("\n");
    loop_count++;
}
    getch();
    return 0;
    
    }
