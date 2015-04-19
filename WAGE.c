#include<stdio.h>

int main(){
    int testcases;
    int rows,columns,days,i,j;
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%d %d %d",&rows,&columns,&days);
                      char grid[rows][columns];
                      char temp[rows][columns];
                      for(i=0;i<rows;i++){
                                          for(j=0;j<columns;j++){
                                                                 scanf("%c",&grid[i][j]);
                                                                 }
                                          }
                      for(i=0;i<rows;i++){
                                          for(j=0;j<columns;j++){
                                                                 temp[i][j] = grid[i][j];
                                                                 }
                                          }
                      while(days-- > 0){
                                   for(i=0;i<rows-1;i++){
                                                       for(j=0;j<columns-1;j++){
                                                                                if(grid[i][j]=='W'){
                                                                                                    if(grid[i+1][j]=='W' && grid[i][j+1]=='A'){
                                                                                                                         temp[i][j+1]='W';
                                                                                                                         }
                                                                                                    else if(grid[i+1][j]=='A' && grid[i][j+1]=='W'){
                                                                                                         temp[i+1][j]='W';
                                                                                                         }
                                                                                                    else if(grid[i+1][j]=='A' && grid[i][j+1]=='A'){
                                                                                                         temp[i+1][j]='A';
                                                                                                         temp[i][j+1]='A';
                                                                                                         }
                                                                                                    else if(grid[i+1][j]=='W' && grid[i][j+1]=='G'){
                                                                                                         temp[i][j]='G';
                                                                                                         }
                                                                                                     else if(grid[i+1][j]=='G' && grid[i][j+1]=='W'){
                                                                                                         temp[i][j]='G';
                                                                                                         }
                                                                                                      else if(grid[i+1][j]=='G' && grid[i][j+1]=='G'){
                                                                                                         temp[i][j]='G';
                                                                                                         }
                                                                                                      else if(grid[i+1][j]=='A' && grid[i][j+1]=='G'){
                                                                                                         temp[i][j]='G';
                                                                                                         temp[i+1][j]='W';
                                                                                                         }
                                                                                                      else if(grid[i+1][j]=='W'&&grid[i][j+1]=='W'){
                                                                                                           }
                                                                                                       else{
                                                                                                            temp[i][j]='G';
                                                                                                            temp[i][j+1]='W';
                                                                                                            }
                                                                                                            
                                                                                                    }
                                                                                else if(grid[i][j]=='A'){
                                                                                    if(grid[i][j+1]=='A'&& grid[i+1][j]=='G'){
                                                                                                           temp[i+1][j]=='A';
                                                                                                           }
                                                                                    else if(grid[i][j+1]=='A'&&grid[i+1][j]=='W'){
                                                                                         temp[i][j]='W';
                                                                                         }
                                                                                    else if(grid[i][j+1]=='G'&&grid[i+1][j]=='G'){
                                                                                         temp[i+1][j]='A';
                                                                                         temp[i][j+1]='A';
                                                                                         }
                                                                                    else if(grid[i][j+1]=='W'&&grid[i+1][j]=='G'){
                                                                                         temp[i+1][j]='A';
                                                                                         temp[i][j]='W';
                                                                                         }
                                                                                    else if(grid[i][j+1]=='W'&& grid[i+1][j]=='A'){
                                                                                         temp[i][j]='W';                                                                                         
                                                                                         }
                                                                                    else if(grid[i][j+1]=='G'&&grid[i+1][j]=='A'){
                                                                                         temp[i][j+1]='A';
                                                                                         }
                                                                                    else if(grid[i][j+1]=='G'&&grid[i+1][j]=='W'){
                                                                                         temp[i][j+1]='A';
                                                                                         temp[i][j]='W';
                                                                                         }
                                                                                    else if(grid[i][j+1]=='A'&&grid[i+1][j]=='A'){}
                                                                                    else{
                                                                                         temp[i][j]='W';
                                                                                         }
                                                                                         
                                                                                         
                                                                                     
                                                                                }
                                                                                else{
                                                                                     if(grid[i][j+1]=='W' && grid[i+1][j]=='A'){
                                                                                                          temp[i][j]='A';
                                                                                                          temp[i][j+1]='G';
                                                                                                          }
                                                                                     else if(grid[i][j+1]=='W' && grid[i+1][j]=='G'){
                                                                                          temp[i][j+1]='G';
                                                                                          }
                                                                                     else if(grid[i][j+1]=='G' && grid[i+1][j]=='A'){
                                                                                          temp[i][j]='A';
                                                                                          }
                                                                                     else if(grid[i][j+1]=='W' && grid[i+1][j]=='W'){
                                                                                          temp[i][j+1]='G';
                                                                                          temp[i+1][j]='G';
                                                                                     
                                                                                          }
                                                                                     else if(grid[i][j+1]=='G' && grid[i+1][j]=='G'){}
                                                                                     else if(grid[i][j+1]=='A' && grid[i+1][j]=='W'){
                                                                                          temp[i][j]='A';
                                                                                          temp[i+1][j]='G';
                                                                                          }
                                                                                     else if(grid[i][j+1]=='G' && grid[i+1][j]=='W'){
                                                                                          temp[i+1][j]='G';
                                                                                          }
                                                                                     else if(grid[i][j+1]=='A'&& grid[i+1][j]=='G'){
                                                                                          temp[i][j]='A';
                                                                                          }
                                                                                     else {
                                                                                          temp[i][j]='A';
                                                                                          }
                                                                                     }
                                                                                }
                                                       }
                                   for(i=0;i<rows-1;i++){
                                                         if(grid[i][columns-1]=='W'){
                                                                                     if(grid[i+1][columns-1]=='A'){
                                                                                                                   temp[i+1][columns-1]='W';
                                                                                                                   }
                                                                                     else if(grid[i+1][columns-1]=='G'){
                                                                                          temp[i][columns-1]='G';
                                                                                          }
                                                                                     else{}
                                                                                          
                                                                                     }
                                                         else if(grid[i][columns-1]=='A'){
                                                              if(grid[i+1][columns-1]=='G'){
                                                                                            temp[i+1][columns-1]='A';
                                                                                            }
                                                              else if(grid[i+1][columns-1]=='W'){
                                                                   temp[i][columns-1]='W';
                                                                   }
                                                              else{}
                                                              }
                                                         else{
                                                               if(grid[i+1][columns-1]=='W'){
                                                                                            temp[i+1][columns-1]='G';
                                                                                            }
                                                              else if(grid[i+1][columns-1]=='A'){
                                                                   temp[i][columns-1]='A';
                                                                   }
                                                              else{}
                                                              }
                                                            }
                                   for(i=0;i<columns-1;i++){
                                                            if(grid[rows-1][i]=='W'){
                                                                                     if(grid[rows-1][i+1]=='A'){
                                                                                                                   temp[rows-1][i+1]='W';
                                                                                                                   }
                                                                                     else if(grid[rows-1][i+1]=='G'){
                                                                                          temp[rows-1][i]='G';
                                                                                          }
                                                                                     else{}
                                                                                          
                                                                                     }
                                                         else if(grid[rows-1][i]=='A'){
                                                              if(grid[rows-1][i+1]=='G'){
                                                                                            temp[rows-1][i+1]='A';
                                                                                            }
                                                              else if(grid[rows-1][i+1]=='W'){
                                                                   temp[rows-1][i]='W';
                                                                   }
                                                              else{}
                                                              }
                                                         else{
                                                               if(grid[rows-1][i+1]=='W'){
                                                                                            temp[rows-1][i+1]='G';
                                                                                            }
                                                              else if(grid[rows-1][i+1]=='A'){
                                                                   temp[rows-1][i]='A';
                                                                   }
                                                              else{}
                                                              }
                                                            
                                                            }
                                   for(i=0;i<rows;i++){
                                                       for(j=0;j<columns;j++){
                                                                              grid[i][j] = temp[i][j];
                                                                              }
                                                       }
                                   }
                      for(i=0;i<rows;i++){
                                          for(j=0;j<columns;j++){
                                                                 printf("%c",grid[i][j]);
                                                                 }
                                          printf("\n");
                                          }
                      }
    getch();
    return 0;
}
