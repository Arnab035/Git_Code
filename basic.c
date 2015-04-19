#include<stdio.h>

int main(){
    char array[50];
    
    scanf("%[^\n]",array);
    
    printf("%s",array);
    getch();
    return 0;
    
    }
