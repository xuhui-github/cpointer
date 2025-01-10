#include<stdio.h>

int main(int argc,char **argv){
  char * str="Hello Pointer";
  char * ptr=str;
  while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
  }
  return 0;
}
