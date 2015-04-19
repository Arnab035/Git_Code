#include<stdio.h>

int main(){
    long int groups,teams,knockout,direct,count;
    unsigned long long group_games,knockout_games,knockout_teams,l_value,n,y,total_games;
    
    unsigned int number_of_1_bits ;
    while(1){
             scanf("%ld %ld %ld %ld",&groups,&teams,&knockout,&direct);
             if(groups==-1)
                  break;
             else{
                  count = 0;
                  n =  ((unsigned long long)teams * (unsigned long long)(teams-1)) / 2;   //otherwise overflow is caused, please use cast//
                  
                                
                  group_games = (unsigned long long)n * (unsigned long long)groups ;
                  knockout_teams = ((unsigned long long)groups*(unsigned long long)knockout) + direct;
                  
                  
                  l_value = knockout_teams;
                  number_of_1_bits = 0;
                  while( l_value ){
                                       if((l_value & 1)==1){
                                                          number_of_1_bits += 1;
                                                          }
                                       l_value >>= 1;
                                       count++;
                                       }
                  if(number_of_1_bits==1){
                                          y = 0;
                                          count = count-1;
                                          knockout_games = (unsigned long long)pow(2.00,(double)count)-1;
                                            
                                          }
                  else{
                       y = (unsigned long long)pow(2.00,(double)count)- knockout_teams;
                       
                       knockout_games = (unsigned long long)pow(2.00,(double)count)-1; 
                       
                       }
                  total_games = (unsigned long long)knockout_games + (unsigned long long)group_games ;
                  printf("%ld*%ld/%ld+%ld=%llu+%llu\n",groups,knockout,teams,direct,total_games,y);
                  
                  }
             }
             
    return 0;
    getch();
    }
