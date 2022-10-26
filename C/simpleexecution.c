#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(int argc, char** argv){
  char a[100][100];
  char buffer[100];
  int t = 1,j, i,prev = 0, size = 0, begin = 0;
  int n  = 1;  //read(0, buffer, 100);
  
  while(n  > 0 && t){
    n = read(0, buffer, 100);
    for(i = 0; i < n; i++){
      if(buffer[i] == ' ')
      {
        size++;
        begin = 0;
        continue;
      }  
      if(buffer[i] == '\n'){
        t = 0;
        break;
        } 
        a[size][begin] = buffer[i]; 
        begin++;
    }
       
  }
  for(i = 0; i < size + 1; i++)
   printf("%s\n", a[i]);
  getch();
  return 0;
}
