 #include<stdio.h>
 

 
 int main(){
      int testcases;
      unsigned long int first,second,i;
      scanf("%d\n",&testcases);
      while(testcases-- > 0){
                              scanf("%lu %lu",&first, &second);
                              if(first==1){
                                           printf("2\n");
                                           first+=2;
                                           }
                              else if(first==2){
                                          printf("2\n");
                                          first++;
                                   }
                             
                              for( i=first;i<=second;i+=2){
                                                        if(isPrime(i))
                                                              printf("%lu\n",i);
                                                         }
                              
                              
                              printf("\n");
                              
                              }
                              
      getch();                       
      return 0;
     
     
     }
     
int isPrime(unsigned long int number){
        int i;
        for(i=2;i<=sqrt(number);i++){
                         if(number%i==0)
                               return 0;
                         else continue;
                     
                     }
        return 1;
   }
