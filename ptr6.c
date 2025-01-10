int main(void){
  int num=34;
  int num1;
  int * const ptr=&num;
  printf("Value stored at pointer is %d\n",*ptr);
//  ptr=&num1;
  return 0;
}
