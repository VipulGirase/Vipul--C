#include<stdio.h>


void Demo()
{
    auto int A = 10;
    A++;    // Increment the value by 1
    printf("Value from Demo is : %d\n",A);

}

void Hello()
{
   static int B = 10;
   B++;
   Printf("Value from Hello is : %d\n",B);
}


int main()
{
    Demo();
    
    Demo();
    
    Demo();
    
    Hello();

    Hello();

    Hello();


 return 0;
}