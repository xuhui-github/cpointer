int main(){
  int num1=19;
  int num2=33;
  const int * ptr1;

  int *ptr2;
  ptr1=&num1;

//  *ptr1=39; //can not do this
  num1=34; //can be done
  ptr1=&num2;
  printf("Value stored at pointer is %d\n",*ptr1);
  return 0;
}
