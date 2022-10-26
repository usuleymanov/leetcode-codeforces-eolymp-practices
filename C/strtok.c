#include <string.h>
#include <stdio.h>

int main()
{
   char str[80] = "Th,is is - www.tuto.rialspo&int.com - webs,ite";
   const char s[2] = "-";
   char *token;
   int i;
   
   /* get the first token */
   token = strtok(str, " ,.");
   
   /* walk through other tokens */
   while( token != NULL ) 
   {
      printf( "%s\n", token );
    
      token = strtok(NULL, "&&");
   }
/*   char buf[500];
   while(1){
      gets (buf);
      if(strcmp(buf, "exit") == 0)
       {
      break;
       }
       /* get the first token */
  // token = strtok(str, " ");
   
   /* walk through other tokens */
 //  while( token != NULL ) 
 //  {
   //   printf( "%s\n", token );
    
    //  token = strtok(NULL, "");
 //  } 
        //  }
   //getch();
   scanf("%d", &i);
   return(0);
}
