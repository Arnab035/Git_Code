 #include<stdio.h>
 
  int reverse(int );
  int main(){
      int testcases,first,second,test=0;
      int result;
      scanf("%d\n",&testcases);
      while(test++<testcases){
           scanf("%d %d\n",&first,&second);
           result = reverse(first)+reverse(second);
           printf("%d\n",reverse(result));
      }
  return 0;
  }
  
  int reverse(int num){
      int revnum=0;
      while(num%10==0)
           num= num/10;
      while(num!=0){
          revnum =revnum*10;
          revnum = revnum + (num%10);
          num = num/10;
    }
      return revnum;
          
  
  }
