#include<stdio.h>
#include<math.h>

int main(){
    int rod_length;
    int i,cuts,sum;
    while(1){
             scanf("%d",&rod_length);
             sum = 1;
             cuts = 0;
             if(rod_length==0)
                 break;
            
             else{
                  i = 0;
                  while(sum <= rod_length){
                            sum = sum + (int)pow(2,i);        
                            i++;
                            cuts++;
                            }
                  printf("%d\n",cuts-1);
                  }
             }
            getch();
            return 0;
    }
