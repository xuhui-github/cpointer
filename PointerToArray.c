// int (* ptr2arr) [4]; it is apointer to an array of 4 integer
// like any other pointer variable,it can point to only one location at 
// a time

#include<stdio.h>
int main(int argc,char *argv[]){
  int arr[4]={1,2,3,4};
  int (* ptr2arr) [4];
  int i;
  int *ptr=arr;
  ptr2arr=&arr;
  for(i=0;i<4;i++){
    printf("address of array = %p\n",arr+i);
  }

  for(i=0;i<4;i++)
    printf("Value of %p = %d\n",(ptr2arr[0]+i),*(ptr2arr[0]+i));
  return 0;
}

