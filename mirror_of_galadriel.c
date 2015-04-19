#include<stdio.h>

int isPalindrome(char[] ,char[] );

int main(){
    int testcases,i;
    char magic[10];
    char rev_magic[10];
    scanf("%d",&testcases);
    while(testcases-- > 0){
                      scanf("%s",magic);
                      
                      if(isPalindrome(magic,rev_magic))
                          printf("YES\n");
                      //printf("%s",rev_magic);
                      else{
                           if(strlen(magic)%2==0){
                                                  for(i=0;i<(strlen(magic)/2);i++){
                                                                                   if(magic[i]!=magic[i+(strlen(magic)/2)]){
                                                                                                                            printf("NO\n");
                                                                                                                            break;
                                                                                                                            }
                                                                                   }
                                                  if(i>=(strlen(magic)/2))
                                                         printf("YES\n");
                                                  }
                           else
                                printf("NO\n");
                           }
                     
                      
                      }
    getch();
    return 0;
    }
    
int isPalindrome(char array1[],char array2[]){
                    int length,i;
                    length = strlen(array1);
                    for(i=0;i<length;i++){
                                          array2[i] = array1[length-(i+1)];
                                          }
                    array2[i] = '\0';
                    if(strcmp(array1,array2)==0){
                                                 return 1;
                                                 }
                    else return 0;
    }
