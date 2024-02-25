#include<stdio.h>
#include<stdlib.h>

bool arraysearch(int data){
  return true;
}

bool linkedlistsearch(int data){
  return true;
}

bool binarysearch(int data){
  //some code
  return true;
}

bool search(bool (*funptr)(int) ,int data){
  return (*funptr)(data);
}


