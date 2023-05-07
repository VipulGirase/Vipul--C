#include<stdio.h>



struct Demo
{ 
  int i;
  float f;
struct Inner
  {
  int j;
  int d;
}obj1,obj2;
 int k;
}oobj;
  
int main()
{
  // structure object / variable creation
  // Memory gets allocated at this point
 
 
  obj1.i = 11.0;
  obj2.j = 21;

  oobj.k = 10;

  printf("Size of obj1 is :%d\n",sizeof(obj1));
  printf("Size of obj2 is :%d\n",sizeof(obj2));
  printf("i of obj2 is : %d\n",obj2.i);


 return 0;
}