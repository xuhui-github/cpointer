#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

void calling_function(void){
  int t1,t2,t3;
  t1=20;
  t2=30;
  t3=called_function(t1,t2);
}

int called_function(int x,int y){
  int t1,t2,t3;
  t1=x;
  t2=y;
  t3=t1+t2;
  return t3;
}

int main(void){
  calling_function();
  return 0;
}
