#include<stdio.h>

int main(){
    int a, b,c;
    int d;
    while(1){
            scanf("%d %d %d",&a,&b,&c);
            if(a==0&&b==0&&c==0){
                                 break;
                                 }
            else{
                if(a==b && b==c){
                      printf("GP ");
                      printf("%d\n",a);
                                 }
                else{
                  if((b-a)==(c-b)){
                                  printf("AP ");
                                  printf("%d\n",c+(b-a));
                                  }
                  else if((b*b)==(a*c)){
                                        printf("GP ");
                                        d = b/a ;
                                        printf("%d\n",c*d);
                                       }
                  else
                      printf("Wrong sequence");
                 }
                }
            }
    getch();
    return 0;
    }
