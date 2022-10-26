#include<stdio.h>
#include <string.h>
int main(){
   char bin[10009];
   char hex[10009];
   int binnum[10009];
   int t, i = 0, j = 0;
   scanf("%s",bin);
   while(bin[i]){
      binnum[i] = bin[i] - 48;
      i++;
   }
   i--;
   while(i >= 3){
       t =  binnum[i-3]*8 + binnum[i-2]*4 +  binnum[i-1]*2 + binnum[i];
       if(t > 9)
            hex[j] = t + 55;
       else
            hex[j] = t + 48;
       i = i - 4;
       j++;
   }
   if(i == 2)
      hex[j] = binnum[i-2]*4 +  binnum[i-1]*2 + binnum[i] + 48;
   else if(i == 1)
      hex[j] = binnum[i-1]*2 + binnum[i] + 48 ;
   else if(i == 0)
      hex[j] =  binnum[i] + 48 ;
   else
      j--;
   while(j >= 0){
      printf("%c",hex[j]);
      j--;
   }
   printf("\n");
   getch();
   return 0;
}
