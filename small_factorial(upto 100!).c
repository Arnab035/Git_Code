#include<stdio.h>

//the trick to calculate factorials is to store the number in a one-dimensional array, where each array element contains only a digit
//of the number-- for eg. 123 is stored as a[]={3,2,1};

int main(){
    int digits_number;       //dynamically calculates the no. of digits in the running product
    int array_of_running_product[200];
    int testcases;
    scanf("%d",&testcases);
    while(testcases-- > 0){
          digits_number=1;
          array_of_running_product[0] = 1;  //running product array contains the running product of two numbers
          int factorial;
          scanf("%d",&factorial);
          int carry=0;                //this variable stores the carry which will be added to the product of 2 one-digit numbers
          int x,i,j;
    
          for(i=1;i<=factorial;i++){
                      for(j=0;j<digits_number;j++){
                                       x = array_of_running_product[j]*i + carry;  
                                       array_of_running_product[j]= x%10;
                                       carry = x/10; 
                                       }
                      while(carry>0){              //this condition is checked if the carry is left even after the multiplication is complete
                                     array_of_running_product[digits_number]= carry%10;
                                     carry = carry/10;
                                     digits_number++;          //increment the number of digits variable
                                     }
                      }
          for(i=digits_number-1;i>=0;i--)
                printf("%d",array_of_running_product[i]);    
    )
    getch();
    return 0;    
}
