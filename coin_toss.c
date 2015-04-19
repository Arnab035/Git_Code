#include<stdio.h>

int main(){
    int testcases,data_set,i;
    int ttt,tth,tht,thh,htt,hth,hht,hhh;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                   ttt=0,tth=0,tht=0,thh=0,htt=0,hth=0,hht=0,hhh=0;
                   scanf("%d",&data_set);
                   char cointoss[40];
                   scanf("%s",cointoss);
                   for(i=0;i<=38;i++){
                                      if(cointoss[i]=='H'){
                                                           if(cointoss[i+1]=='T'){
                                                                                  if(cointoss[i+2]=='H'){
                                                                                                         hth++;
                                                                                                         continue;
                                                                                                         }
                                                                                  else{
                                                                                       htt++;
                                                                                       continue;
                                                                                       }
                                                                                  }
                                                           else{
                                                                if(cointoss[i+2]=='H'){
                                                                                       hhh++;
                                                                                       continue;
                                                                                       }
                                                                else{
                                                                     hht++;
                                                                     continue;
                                                                     }
                                                                }
                                     
                                                           }
                                     else{
                                                 if(cointoss[i+1]=='T'){
                                                                         if(cointoss[i+2]=='H'){
                                                                                                tth++;
                                                                                                continue;
                                                                                                }
                                                                         else{
                                                                               ttt++;
                                                                               continue;
                                                                               }
                                                                         }
                                                 else{
                                                      if(cointoss[i+2]=='H'){
                                                                              thh++;
                                                                              continue;
                                                                            }
                                                      else{
                                                            tht++;
                                                            continue;
                                                          }
                                                     }
                                          }
                                      }
                    printf("%d %d %d %d %d %d %d %d %d\n",data_set,ttt,tth,tht,thh,htt,hth,hht,hhh);
                    
                   }
          getch();
          return 0;
    }
