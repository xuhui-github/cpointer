#include<stdio.h>
#include<malloc.h>

int *ptr=NULL;
static int count=0;

void insert(int data){
  if(ptr==NULL){
    ptr=(int *) malloc(sizeof(int));
    ptr[0]=data;
    //*ptr=data
  }
  else
  {
    ptr=(int *)realloc(ptr,sizeof(int)*(count+1));
    ptr[count]=data;
  }
  count++;
}

void show(){
  int i=0;
  for(i=0;i<count;i++)
    printf("%d\n",ptr[i]);
}

void delete(int **ptr){
  free(*ptr);
}

int main(int argc,char ** argv){
  int c=0;
  int data;
  while(c!=3){
    printf("Insert choice\n");
    printf("1 to insert data\n");
    printf("2 to show data\n");
    printf("3 to quit data\n");
    scanf("%d",&c);
    switch(c){
      case 1:
	printf("Data= \n");
	scanf("%d",&data);
	insert(data);
	break;
      case 2:
	show();
	break;
      
    }
  }
  delete(&ptr);
  return 0;
}
