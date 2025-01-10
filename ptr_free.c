#include<stdio.h>
#include<stdlib.h>

int main(void){
  int count=1;
  int *ptr=(int *)malloc(sizeof(int)*count);
  *ptr=10;
  printf("*ptr=%d\n",*ptr);
  free(ptr);
}
