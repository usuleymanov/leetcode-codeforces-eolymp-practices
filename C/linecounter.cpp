#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char ** argv){
    int fd = open("samplefile.txt", O_RDONLY);
    int fd2 = open("counter.log.txt", O_WRONLY | O_APPEND);
        time_t rawtime;
       struct tm *info;
       char buffer2[80];

       time( &rawtime );

       info = localtime( &rawtime );

       strftime(buffer2,80,"%x - %I:%M%p", info);
       //printf("Formatted date & time : |%s|\n", buffer2 );
       strcat(buffer2, " ");
       write(fd2, buffer2, strlen(buffer2));
  if( fd < 0){
    write(2, "There was an error", 18);
    write(fd2, "-1\n",3 );
    exit(0);
  }
  else
  {
      int buffersize = 128;
      char buffer[buffersize];
      int n, i;
      int linecount = 0;
      int longest = 0;
      int shortest = 10000;
      int ccount = 0;
      n = read(fd, buffer, buffersize);
      if(n ==0)
        shortest = 0;
     while( n  > 0){
        for( i = 0; i < n; i++){
          if(buffer[i] == '\n'){
            linecount++;
            if(ccount > longest)
              longest = ccount;
            if(ccount < shortest)
              shortest = ccount;
            ccount = 0;
            } 
          else 
           ccount++;
        }
        n = read(fd, buffer, buffersize);
      }

        char * result;
        result = (char *) malloc(20);
        //char tmp[12];
        char * tmp;
        result[0] = NULL;
        tmp = (char *) malloc(20);
        itoa(linecount, tmp, 10);
        //printf("%s\n", tmp);
        
        strcat(result, tmp);
        strcat(result, " ");
        //printf("%s", result);
        itoa( longest, tmp, 10);
        //printf("%s\n", tmp);
        strcat(result, tmp);
        strcat(result, " ");
        itoa(shortest, tmp, 10);
        //printf("%s\n", tmp);
        strcat(result, tmp);
        strcat(result, "\n");
        //printf("%s", result);
        write(fd2, result, strlen(result));
        
  }
   //scanf("%d", &fd);
   return 0;
}
