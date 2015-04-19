#include<stdio.h>

int* compute_value(char[] ,int );
int main(){
     char arrays[1000]; 
     int* result;
     result = (int*) malloc(3*sizeof(int));
     int testcases;
     scanf("%d",&testcases);
     while(testcases-- > 0){
        int i=0;
        printf("\n");
        scanf(" %[^\n]",arrays);        //leave a blank always before scanf format string
        int flag=0;                             //machula13 + 75425 = 77038
        while(arrays[i]!='+'){
                          
                       if(arrays[i]=='m'){
                                         flag=1;
                                         break;
                                         }
                       i++;                             
                       }
     
    
        if(flag==0){
                while(arrays[i]!='='){
                                     if(arrays[i]=='m'){
                                                       flag=2;
                                                       break;
                                                       }
                                     i++;
                                     }
     
                }
     
     result =  compute_value(arrays,flag);
     printf("%d + %d = %d\n",result[0],result[1],result[2]);

}
     getch();
     return 0;           
    
    }
    
int* compute_value(char arr[],int value){
       int a=0,b=0,i=0;
       int* retarr;
       retarr = (int*) malloc(3*sizeof(int));
       if(value==0){
                    while(arr[i]!=' '){
                        a = 10*a + arr[i]-'0';
                        i++;
                        }
                    
                    i=i+3;  
                    while(arr[i]!=' '){
                         
                         b = 10*b + arr[i]-'0';
                         i++;
                         }
                    *(retarr+0) = a;
                    *(retarr+1) = b;
                    *(retarr+2) = a+b;
        
                    return retarr;
                    }
       else if(value==1){
                  while(arr[i]!='+')
                        i++;
                    i+=2;
                    while(arr[i]!=' '){
                                a = a*10+ arr[i]-'0';
                                i++;
                                }
                    i=i+3;
                    while(arr[i]!='\0'){
                         b = b*10+arr[i]-'0';
                         i++;
                         }
                   
                    *(retarr+0) = b-a;
                    *(retarr+1) = a;
                    *(retarr+2) = b;
                    return retarr;
            }
       else{
            while(arr[i]!=' '){
                        a = 10*a + arr[i]-'0';
                        i++;
                        }
                    while(arr[i]!='=')
                         i++;
                    i+=2;
                    while(arr[i]!='\0'){
                         b = b*10+ arr[i]-'0';
                         i++;
                         }
                    
              *(retarr+0) = a;
              *(retarr+1) = b-a;
              *(retarr+2) = b;
             return retarr;
            }
     }
