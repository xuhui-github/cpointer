#include<malloc.h>
#include<stdio.h>

void mesg(int num){
  printf("Mesg no. %d\n",num);
}

int main(int argc,char **argv){
  int *t;
  void (*fptr)(int);
  void (*fptr1)(int);

  fptr=mesg;
  fptr1=mesg;
  fptr(10);
 // (*)fptr1(23);
 // (*ftpr)(20);
  (*fptr1)(20);
  return 0;
}
