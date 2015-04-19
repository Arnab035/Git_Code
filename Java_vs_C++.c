#include<stdio.h>


struct record{
           char data;
           struct record *next;
           };
           
void create(struct record * );

void delete(struct record * ,int );

void insert(struct record * ,int );

int main(){
    int k,s;
    char input;
    struct record *node,*head,*p;
    while(1){
        node = (struct record *)malloc(sizeof(struct record));
        head = node;
        p=node;
    
        create(node);
        while(head->next!=NULL){
                            k=1;
                            if(head->data=='_'){
                                          
                                          
                                                delete(p,k);
                                                head = head->next;
                                                printf("%c",toupper(head->data));
                                                head = head->next;
                                                
                                           //printf("Error!\n");
                                          }
                            else if(head->data >= 'A' && head->data <= 'Z'){
                                          
                                                   insert(p,k);
                                                   printf("%c",tolower(head->data));
                                                   head = head->next;
                                                   
                                            //printf("Error!\n");
                                           }
                            else{
                                printf("%c",head->data);
                                head=head->next;
                                k++;
                                }
                            }
             }
    getch();
    return 0;
    }
    
void create(struct record *node){
    char i;
    scanf("%c",&i);
    if(i!='\n'){
             node->data=i;
             
             struct record *ph=(struct record *)malloc(sizeof(struct record));
             node->next=ph;

             create(ph);
             }
             else
                 node->next=NULL;
                //node=NULL;   --this leads to error
                 return;
     
     
     }
     
void delete(struct record *p,int k){
      struct record *dp;                 //create a new pointer here and free this pointer, do not try to free any pointer
                                         //which was passed as a formal argument
      while(k > 1){
              p = p-> next;
              k--;
              }
      dp = p->next;
      p->next=dp->next;
      free(dp);
   
      
      return;
     }
void insert(struct record *p, int k){
     struct record *dp;
     
     dp = (struct record *)malloc(sizeof(struct record));
     dp->data='_';
     while(k>1){
                 p = p->next;
                 k--;
                 } 

     dp->next = p->next;
     p->next = dp;
     printf("%c",dp->data);    
     return ;
     
     }
