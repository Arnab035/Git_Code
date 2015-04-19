#include<stdio.h>

int main(){
    char given[501];
    char objective[501];
    int moves,i;
    int flag ;
    while(1){
             scanf("%s %s",given,objective);
             if(given[0]=='*' && objective[0]=='*')
                 break;
             moves = 0;
             flag = 1;
             for(i=0;i<strlen(given);i++){
                                          if((flag == 1) && (given[i] != objective[i])){
                                               flag = 0;
                                               moves++;
                                               }
                                          else if((flag==0) && (given[i]==objective[i])){
                                               flag = 1;
                                               }
                                          else{
                                               continue;
                                               }
                                          }
             printf("%d\n",moves);
             }
    getch();
    return 0;
    }
