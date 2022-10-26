#include <sys/types.h>
#include <dirent.h>
#include <string.h>
//#include <libgen.h>
int main(){
      DIR *dirp;
    struct dirent *dp;
dirp = opendir(".");
int errno;
char* name;
name = "agac.c";
while (dirp) {
    errno = 0;
    if ((dp = readdir(dirp)) != NULL) {
        //if (strcmp(dp->d_name, name) == 0) {
           // closedir(dirp);
            printf("%s\n", dp->d_name);
            //getch();
            //return 0;
            //return FOUND;
        //}
    } else {
        if (errno == 0) {
            closedir(dirp);
            printf("not found");
            getch();
            exit(0);
            //return NOT_FOUND;
        }
        //closedir(dirp);
        //return READ_ERROR;
    }
}
   printf("not found");
   getch();
   //return OPEN_ERROR;
   return 0;
}
