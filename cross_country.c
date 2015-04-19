#include<stdio.h>

int compute_lcs(int[] ,int[] ,int ,int );

int main(){
    int datasets;
    int max_lcs,lcs;
    int agnes[2001];
    int tom[2001];
    int i,j;
    scanf("%d",&datasets);
    while(datasets-- > 0){
                     i = 0;
                     max_lcs = 0;
                     while(1){
                              scanf("%d",&agnes[i]);
                              if(agnes[i]==0){
                                              break;
                                              }
                              i++;
                              }
                     while(1){
                              j = 0;
                              while(1){
                                       scanf("%d",&tom[j]);
                                       if(tom[j]==0){
                                                     if(j!=0){
                                                              lcs = compute_lcs(agnes,tom,i,j);
                                                              if(lcs >= max_lcs)
                                                                   max_lcs = lcs;
                                                              
                                                              }
                                                     break;
                                                     }
                                       j++;
                                       }
                              if(j==0) break;
                              }
                     printf("%d\n",max_lcs);
                     
                     }
    getch();
    return 0;
    }

int compute_lcs(int arr1[],int arr2[],int a,int b){
   // printf("%d %d\n",a,b);
    int table_lcs[a+1][b+1];
    int i,j;
    for(i=0;i<=a;i++){
                      table_lcs[i][0] = 0;
                      }
    for(i=0;i<=b;i++){
                      table_lcs[0][i] = 0;
                      }
    for(i=1;i<=a;i++){
                      for(j=1;j<=b;j++){
                                        if(arr1[i-1]==arr2[j-1]){
                                                             table_lcs[i][j] = table_lcs[i-1][j-1] + 1;
                                                             }
                                        else{
                                             if(table_lcs[i-1][j] >= table_lcs[i][j-1]){
                                                                  table_lcs[i][j] = table_lcs[i-1][j];
                                                                  }
                                             else{
                                                  table_lcs[i][j] = table_lcs[i][j-1];
                                                  }
                                             }
                                        }
                      }
   
     
    return table_lcs[a][b];
    }
