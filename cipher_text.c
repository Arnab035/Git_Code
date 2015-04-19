#include<stdio.h>

char source[200];

int main(){
    int columns,rows,length;
    int i,j;
    while(1){
    int count=0;
    scanf("%d",&columns);
    if(columns==0)
         break;
    scanf("%s",source);
    length = strlen(source);
    
    if(length%columns==0)
        rows = length/columns;
    else rows = (length/columns)+1;
    
    char two_source[rows][columns];
    for(i=0;i<rows;i++){
                        
                        if(i%2==0){
                                   for(j=0;j<columns;j++){
                                                          two_source[i][j] = source[count++];  
                                                                    
                                                         }
                                   }
                        else{
                             for(j=columns-1;j>=0;j--){
                                                    two_source[i][j] = source[count++];
                                                   }
                             }
                        }
                        
    
    
    for(i=0;i<columns;i++){
                        for(j=0;j<rows;j++){
                                               printf("%c",two_source[j][i]);
                                               }
                                               
                        }
}
                        
    getch();
    return 0;
    
    }
