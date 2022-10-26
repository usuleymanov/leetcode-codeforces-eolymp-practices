#include<stdio.h>
#include<conio.h>

int main(){
 int a, b, c, n, e, s;
 a = 0;
 b = 1;
 s = 0;
 printf("Write the length of Fibonacci numbers\n");
 scanf("%d",&e);
 
 for( n = 0; n <= e; n++ ){
    c = a + b;
    a = b;
    b = c;  
    s = s + c;
      }   
    
  printf("The sum of %d Fibonacci numbers is %d",e,s);  
    
getch();

return 0;    
    
     }
