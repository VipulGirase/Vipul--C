#include<stdio.h>

#pragma pack(1)     // 2  3, 4,  8
struct Demo
{
  int i;
  float f;
  char ch;
  float d;
};

int main()
{ 
 struct Demo dobj;
 
 printf("Size of the structure is : %d\n",sizeof(dobj));

 return 0;
}