#include<stdio.h>



int multiplication(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 * No2;
    return Ans;
}


int main()
{
  int A = 10, B= 11;
  auto int Ret = 0;
   
  Ret = multiplication(A,B);
  printf("multiplication is : %d\n",Ret);

  return 0;
}