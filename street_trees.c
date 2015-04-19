#include<stdio.h>

int calculate_gcd(int ,int );

int main(){
    int trees;
    int x,count,i;
    count = 0;
    scanf("%d",&trees);
    unsigned long long coordinates[trees];
    for(i=0;i<trees;i++){
                         scanf("%llu",&coordinates[i]);
                         }
    x = coordinates[1]-coordinates[0];
    for(i=2;i<trees;i++){
                         x = calculate_gcd(x,(coordinates[i]-coordinates[i-1]));
                         }
    for(i=0;i<trees-1;i++){
                           count = count + (((coordinates[i+1]-coordinates[i])/x)-1);
                           }
    printf("%d\n",count);
    getch();
    return 0;
    }
    
int calculate_gcd(int a,int b){
    int temp;
    if(a <=b ){
              temp = b%a;
              while(temp!=0){
                              b = a;
                              a = temp;
                              temp = b%a;
                              }
              return a;
              }
    else {
          temp = a%b;
          while(temp!=0){
                         a = b;
                         b = temp;
                         temp = a%b;
                         }
          return b;
         }
  }
