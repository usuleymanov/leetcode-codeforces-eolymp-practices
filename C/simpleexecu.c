#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char ** argv){
   int n, i;
   char temp[20];
   char buffer[200][200];
   n = 0;
   //i = scanf("%s" , temp);
  // printf("%d" , i);
  while(scanf("%s" , temp) == 1 && temp != "\n" ){
    strcpy(buffer[n], temp);
    n++;      
   }
   for(i = 0; i < n; i++) 
    printf("%s" , buffer[i]);  
   getch();
   return 0;
}
/*
#include <stdlib.h>
#define N      20  // For this example, we will allocate 20 strings
#define LENGTH 10  // of 10 characters each (not counting 0 terminator)
...
char **arr = malloc(sizeof *arr * N); 
if (arr)
{
  size_t i;
  for (i = 0; i < N; i++)
  {
    arr[i] = malloc(sizeof *arr[i] * (LENGTH + 1)); 
    strcpy(arr[i], "          "); 
  }
}
*/
