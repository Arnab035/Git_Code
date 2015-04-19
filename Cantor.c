#include<stdio.h>

int main(){
    int numerator,denominator;
    int testcases;
    scanf("%d",&testcases);
    while(testcases-- > 0){
    long long int term,counter=1,count=1,i;
    numerator=1,denominator=1;
    int toggle=0;
    scanf("%llu",&term);
    if(term==1){
                printf("TERM 1 IS 1/1");
                break;
                }
    while(count<term){
       
    
    if((denominator%2)!=0 && numerator==1){
                          denominator++;
                          count++;
                          if(count==term){
                                   printf("TERM %llu IS %d/%d",count,numerator,denominator);
                                   break; 
                                          }
                          }
    else if((numerator%2)==0 && denominator==1){
         numerator++;
         count++;
         if(count==term){
                   printf("TERM %llu IS %d/%d",count,numerator,denominator);
                   break; 
                   }
         
         }
    else{
          if(toggle==0){
                       for(i=0;i<counter;i++){
                            
                             numerator++;
                             denominator--;
                             count++;
                              if(count==term){
                                               printf("TERM %llu IS %d/%d",count,numerator,denominator);
                                               break; 
                                             }
                      }
          
                      
          }
          else{
                      for(i=0;i<counter;i++){
                             
                                             
                             numerator--;
                             denominator++;
                             count++;
                              if(count==term){
                                               printf("TERM %llu IS %d/%d",count,numerator,denominator);
                                               break; 
                                             }
                       }
          
          }
         counter++;
         if(toggle==0) toggle=1;
         else toggle=0;
        
         
         }
    
    }
    printf("\n");
}
    
    getch();
    return 0;
}
