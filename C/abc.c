#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(int argc, char** argv){
    int i;
  for(i = 0 ; i< argc; i++){
   puts(argv[i]);
        } 
   getch();
   return 0;
}
