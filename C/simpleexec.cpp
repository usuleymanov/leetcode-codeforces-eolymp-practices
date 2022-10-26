#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char ** argv){
      int n, i;
      int buffersize = 128;
      char buffer[buffersize];
      n = read(0, buffer, buffersize);
      if(n ==0)

     while( n  > 0){
        for( i = 0; i < n; i++){
          if(buffer[i] == ' '){
                 printf("space");      
                       }
        n = read(0, buffer, buffersize);
      }
      }
   return 0;
}
