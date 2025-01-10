struct data{
  int x;
  int y;
};

void func(struct data v1){
  struct data v2=v1;
}

int main(){
  struct data var;
  var.x=2;
  var.y=4;
  func(var);
  return 0;
}
