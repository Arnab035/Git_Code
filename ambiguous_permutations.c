#include<stdio.h>

int main(){
    int elements,value,i;
    while(1){
             scanf("%d",&elements);
             if(elements==0)
                   break;
             int permut[elements];
             for(i=0;i<elements;i++){
                                     scanf("%d",&permut[i]);
                                     }
             for(i=1;i<=elements;i++){
                                      value = permut[i-1];
                                      if(i==permut[value-1])
                                           continue;
                                      else break; 
                                      }
             if(i<=elements)
                  printf("not ambiguous\n");
             else printf("ambiguous\n");
             }
    getch();
    return 0;
    }
