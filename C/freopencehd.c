#include <sys/stat.h>

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int main(int argc, char** argv){
    int fd = i = 0;
    int buf = 128;
    char buffer[buf];
    fd = open(argv[1], O_RDWR | O_CREATE | S_IWUSR);
    fd2 = 1;
    while(1){
         int size = read(1, buffer, buf); 
          for(i = 0; i<size; i++){
                printf();
                }
   }
    } 
