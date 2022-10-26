#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(int argc, char** argv){
    int i, count = 0, pos = 0;
  char buffer[100];
  gets(buffer);
  char * ex[25];
  for(i = 0; i < 25; i++)
    ex[i] = (char*) malloc(20);
  //sscanf(buffer, "%s", ex[count]);
   char * file;
   file = (char *)malloc(20);
   sscanf(buffer, "%s", file);
   sscanf(buffer, "%s", ex[count]);
   pos += strlen(ex[count]) + 1;
   count++;
   
 // sscanf(buffer, "%s", ex[count]);
 while( sscanf(buffer + pos, "%s", ex[count]) == 1){
   pos += strlen(ex[count]) + 1;
   count++;
}
  ex[count] = NULL;
// for(i = 0; i <= count; i++)
   //puts(ex[i]);
// printf("%d %d", n, m);
  //puts(file);

  execlp(file, ex);
 getch();
 return 0;
}
