#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char ** argv){
  int fd = open("aaaa.txt", O_CREAT | O_WRONLY);
  ftruncate(fd, 100);
  return 0;
}
