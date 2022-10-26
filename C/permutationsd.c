#include<stdio.h>

int arr[] = {1, 2, 3, 4);
void printArray(int length){
     int i;
     for(i = 0; i < length - 1; i++){
         printf("%d ", arr[i]);
           }
  printf("%d\n", arr[length - 1]);
     }
void swap( int i, int j){
     int t = arr[i];
     arr[i] = arr[j];
     arr[j] = t;
     }
void permute(int i,int length) { 
  if (length == i){
     printArray(length);
     return;
  }
  int j = i;
  for (j = i; j < length; j++) { 
     swap(i,j);
     permute(array,i+1,length);
     swap(i,j);
  }
}
int main(void){
    permute(4, 4);
    getch();
    return 0;
}
