#include<stdio.h>

int main(){
    int packets,i,sum_candy,reqd_candy;
  while(1){
    int count=0;
    scanf("%d",&packets);
    if(packets==-1)
        break;
    int candy[packets];
    for(i=0;i<packets;i++){
                           scanf("%d",&candy[i]);
                           }
    sum_candy = 0;
    for(i=0;i<packets;i++){
                           sum_candy+=candy[i];
                           }
    if(sum_candy%packets!=0)
          printf("-1\n");
    else{
         reqd_candy = sum_candy/packets;
        
         //printf("%d\n",reqd_candy);
         for(i=0;i<packets;i++){
                                if(candy[i]>reqd_candy)
                                      count = count + (candy[i]-reqd_candy);
                               }
         printf("%d\n",count);
       }
}
    
    getch();
    return 0;
    }
