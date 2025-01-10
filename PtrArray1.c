#include<stdio.h>
int main(int argc,char ** argv){
  int arr[4]={1,2,3,4};
  int * iptr;
  iptr=&arr[0]+2;
  printf("Address of 2nd index = %p\n",iptr);
  iptr=&arr[2];
  printf("Address of 2nd index = %p\n",iptr);
  return 0;
}
