#include <stddef.h>
#include<stdio.h>
#include<stdlib.h>

#include <stddef.h>



struct inner_node{
  int int_a;
  int int_b;
};

struct node{
  int *a;
  int *b;
  struct inner_node * in_node;
};

int main(void){
  struct node *p;
  int *arrptr;
  int arr[10];
  arrptr=arr;
  int i;
  for(i=0;i<10;i++)
    *(arrptr+i)=i;

  for(i=0;i<10;i++)
    printf("arr[%d]=%d\n",(i+1),*(arrptr+i));

  printf("Size of pointer variable (struct node *)=%d\n",sizeof(struct node *));
  printf("Size of pointer variable pointer to int array=%d\n",sizeof(arrptr));
  printf("ptr value is %d\n",arrptr[3]);
  
}
