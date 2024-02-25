#include<string.h>
#include<malloc.h>
#include<stdio.h>
int main(int argc,char *argv[]){
  char *str="Hello World.";
  char *ptr=NULL;
  ptr=(char *)malloc(sizeof(char)*(strlen(str)+1));
  memcpy(ptr,str,strlen(str));
  printf("%s",ptr);
  return 0;
}
