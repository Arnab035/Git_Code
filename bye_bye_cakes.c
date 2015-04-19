#include<stdio.h>

int main(){
    int cake_matrl[8];
    int i;
    int result_array[4];
    double result,max_cakes;
    while(1){
             for(i=0;i<8;i++)
                            scanf("%d",&cake_matrl[i]);
             if(cake_matrl[0]==-1)
                 break;
             else{
                  
                  double max_cakes = 0.00;
                  for(i=0;i<4;i++){
                                   result =  ceil((double)cake_matrl[i]/(double)cake_matrl[i+4]);
                                   if(result > max_cakes){
                                             max_cakes = result;
                                             }
                                   }
                  if(max_cakes==0.00){
                                      printf("0 0 0 0\n");
                                      }
                  else{
                       for(i=0;i<4;i++){
                                        result_array[i] = (cake_matrl[i+4]*(int)max_cakes)-cake_matrl[i]; 
                                        printf("%d ",result_array[i]);                                       
                                        }
                       printf("\n");
                       
                       }
                  
                  }
             }
     getch();
     return 0;
    }
