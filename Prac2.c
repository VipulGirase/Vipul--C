#include<stdio.h>

int Multiplication(int iNo1, int iNo2)
{
 int iAns = 0;
 iAns = iNo1 * iNo2;
 return iAns;
}

int main()
{
  int iE = 0;
  int iF = 0;
  int iRet = 0;
  printf("Enter first value\n");
  scanf("%d",&iE);
  
  printf("Enter second value\n");
  scanf("%d",&iF);

  iRet = Multiplication(iE,iF);
  
  printf("Multiplication is : %d\n",iRet);


  return 0;
}