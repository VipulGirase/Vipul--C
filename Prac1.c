#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
  int iAns = 0;
  iAns = iNo1 + iNo2;
  return iAns;
}

int main()
{
  int iA = 0;
  int iB = 0;
  int iRet = 0;

  printf("Enter first number\n");
  scanf("%d",&iA);

  printf("Enter second number\n");
  scanf("%d",&iB);

  iRet = Addition(iA,iB);

  printf("Addition is : %d\n",iRet);




 return 0;
}