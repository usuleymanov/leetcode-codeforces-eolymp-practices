#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	if(n==0)
	  printf("0\n");
    else if(n==1)
      printf("1\n");
	else{
       long long a = 1;
       long long b = 1;
       long long c = 2;
       int i;
	for ( i = 0; i < n - 2; i++){
		a = b;
		b = c;
		c = a + b + 1;
	}
	printf("%lld\n", c);
}
getch();
	return 0;
}
