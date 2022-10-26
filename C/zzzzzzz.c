#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void print(char *a, int i, int n) {
    int j;
    if(i == n) {
        printf("%s\n", a);
    } else {
        for(j = i; j <= n; j++) {
            swap(a + i, a + j);
            print(a, i + 1, n);
            swap(a + i, a + j);
        }
    }
}

int main(void) {
    char a[100];
    gets(a);
    print(a, 0, strlen(a) - 1);
    getch();
    return 0;
}
