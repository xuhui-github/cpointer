int main(void){
  int num1=2;
  int num2=3;
  int * const ptr1=&num1;

  //ptr=&num2; //can not do this
  printf("Value stored at pointer is %d\n",*ptr);
  return 0;
}
