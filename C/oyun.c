#include<stdlib.h> 
#include<stdio.h> int main() 
{ int rand_num,n,time,a,b; int correct = 0; int counter = 0; printf("guess a number between 0 and 100 \n"); rand_num = rand()%100; do { scanf("%d",&a); if (a == rand_num) { printf ("congratulation you won!\n"); counter ++; correct = 1; } if (a < rand_num) { counter ++; printf ("guess higher number\n"); } if (a > rand_num) { counter ++; printf ("guess lower number\n"); } if (counter ==5) { printf("you lost\n"); return 0; } } 
while (correct==0); return 0; }
