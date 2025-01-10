#include<stdio.h>
struct data{
  int x,y;
};

void func(struct data * p){
  struct data * ptr=p;
  ptr->x=20;
  ptr->y=34;
}

int main(void){
  struct data var;
  var.x=0;
  var.y=0;
  printf("var->x=%d var->y=%d\n",var.x,var.y);
  func(&var);
  printf("var->x=%d var->y=%d\n",var.x,var.y);
  return 0;
}


