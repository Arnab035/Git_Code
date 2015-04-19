#include<stdio.h>

int main(){
    int bob_friends,count,i,j,friends_of_bob_friends,k=0,temp;
    scanf("%d",&bob_friends);
    int id_bob_friends[bob_friends];
    int elements = bob_friends*100;
    int id_friends_of_bob_friends[elements];
    for(i=0;i<bob_friends;i++){
                               scanf("%d %d",&id_bob_friends[i],&friends_of_bob_friends);
                               for(j=0;j<friends_of_bob_friends;j++){
                                                                     scanf("%d",&id_friends_of_bob_friends[k]);   
                                                                     k++;                  
                                                                     }
                               }
  
    count = 0;
    for(i=k;i>=1;i--){
                     for(j=0;j<i;j++){
                                      if(id_friends_of_bob_friends[j]>id_friends_of_bob_friends[j+1]){
                                                                                          temp = id_friends_of_bob_friends[j];
                                                                                          id_friends_of_bob_friends[j] = id_friends_of_bob_friends[j+1];
                                                                                          id_friends_of_bob_friends[j+1] = temp;
                                                                                           }
                                      }
                     }
    i=0;
    while(i<k){
        if(id_friends_of_bob_friends[i+1]!=id_friends_of_bob_friends[i]){
               for(j=0;j<bob_friends;j++){
                                          if(id_friends_of_bob_friends[i]==id_bob_friends[j]){
                                                                                           break;
                                                                                            }
                                            }
               if(j==bob_friends)
                   count++;
               }
               
               i++;
               }
    printf("%d\n",count);
    getch();
    return 0;
    }
