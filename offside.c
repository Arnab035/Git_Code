#include<stdio.h>

int main(){
    int a,d,i,j,small,temp;
while(1){
    scanf("%d %d",&a,&d);
    if(a==0 && d==0)
        break;
    int attacker[a];
    int defender[d];
    for(i=0;i<a;i++)
       scanf("%d",&attacker[i]);
    for(i=0;i<d;i++)
       scanf("%d",&defender[i]);
    small= attacker[0];
    for(i=1;i<a;i++){
                     if(attacker[i] < small)
                               small = attacker[i];
                     }
    //printf("%d\n",small);
    for(i=d-1;i>=1;i--){
                     for(j=0;j<i;j++){
                                      if(defender[j]>defender[j+1]){
                                                          temp = defender[j];
                                                          defender[j] = defender[j+1];
                                                          defender[j+1] = temp;
                                                          }
                                      }
                     }
    //printf("%d %d",defender[0],defender[1]);
    if(small <= defender[0])
       printf("Y\n");
    else {
          if(small<defender[1])
             printf("Y\n");
          else printf("N\n") ;        
         }
          
}
    getch();
    return 0;
    }
