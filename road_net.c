#include<stdio.h>

int main(){
    int testcases;
    int towns,i,j,k;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                          scanf("%d",&towns);
                          int distances[towns][towns];
                          for(i=0;i<towns;i++){
                                               for(j=0;j<towns;j++){
                                                                    scanf("%d",&distances[i][j]);
                                                                    }
                                               }
                          for(i=0;i<towns-1;i++){
                                                 for(j=i+1;j<towns;j++){
                                                                        for(k=0;k<towns;k++){
                                                                                             if(k==i||k==j) continue;
                                                                                             else{
                                                                                                  if(distances[i][j]==distances[i][k]+distances[k][j])
                                                                                                       break;
                                                                                                  }
                                                                                             }
                                                                        if(k == towns){
                                                                                      printf("%d %d\n",i+1,j+1);
                                                                                     }
                                                                        }
                                                 }
                          }
    getch();
    return 0;
    }
