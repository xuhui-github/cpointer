#include<stdio.h>
#include<stdlib.h>


int * called_function(int* x){
  int t2;
  int *t1;
  int *t3;
  t1=x;
  t2=10;
  t3=(int*)malloc(sizeof(int));
  *t3=*t1+t2;
  return t3;
}

void calling_function(void){
  int t1;    
  int* t2;
  t1=10;
  t2=called_function(&t1);
  printf("*t2=%d\n",*t2);
}
int main(void){
  calling_function();
  return 0;
}
