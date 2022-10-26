#include <stdarg.h>
#include <stdio.h>
#include<string.h>
#include <stdlib.h>

int
add_em_up (int count,...)
{
  va_list ap;
  int i, sum;

  va_start (ap, count);         /* Initialize the argument list. */

  sum = 0;
  for (i = 0; i < count; i++)
    sum += va_arg (ap, int);    /* Get the next argument value. */

  va_end (ap);                  /* Clean up. */
  return sum;
}

char* concat( char *format, ...)
{
        int i;
        va_list asp;
        char* b;
        char buffer[18];
        b = (char *) malloc(20);
        int n = strlen(format);
        printf("%d/n", n);
        va_start(asp, format );
        for (i = 0; i < n; i++){
           if( format[i] == 's' )
            strcat(b, va_arg(asp, char *)); 
           if( format[i] == 'i' ){
             itoa( va_arg(asp, int), buffer, 10);
             strcat(b, buffer);
           }
       }
       va_end(asp);
       return b;
}


int
main (void)
{
  /* This call prints 16. */
  printf ("%d\n", add_em_up (3, 5, 5, 6));

  /* This call prints 55. */
  printf ("%d\n", add_em_up (10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));
  char * c = concat("ssiis",  "67jjjj", "gtt87", 76,98, "55yuu");
  puts(c);
   getch();
  return 0;
}
