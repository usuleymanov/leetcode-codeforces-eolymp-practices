#include <unistd.h>
#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
int ret;
//char *cmd[] = { "ls", "-l", (char *)0 };
//char *env[] = { "HOME=/usr/home", "LOGNAME=home", (char *)0 };
 execl ("test.exe", "test.exe", NULL);
scanf("%d", &ret);
return 0;
}
