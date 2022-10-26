#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{ float a, b, c, x1, x2, d;
printf( "Kvadrat tenliyin emsallarini daxil edin\n");
scanf( "%f%f%f", &a,&b,&c);
printf("sizin kvadrat tenlik %fx^2+%fx+%f=0\n",a,b,c);
 d = b*b - 4*a*c;
 if( d < 0 ){
     printf( "tenliyin helli yoxdur");
     }else{
           
      x1 = (-b + sqrtf( d))/2*a;
      x2 = (-b - sqrtf( d))/2*a;
      printf("tenliyin helleri\n%f\n%f", x1, x2); }    
           
           
           
  
       
   
    getch();
 
    return 0;   
    
 }
     
