#include<stdio.h>
//指向函数的指针变量没有指针的++ --
//函数指针中的形参可有可无

int Find_Max(int a,int b)
{
  return a > b ? a : b;
}

int main(int argc,char* argv[])
{
  int num1,num2,num3;
  int (*P)(int,int);
  P = Find_Max;
  scanf("%d%d",&num1,&num2);
  num3 =  P(num1,num2);
 printf("num1 = %d,num2 = %d,num3 = %d\n",num1,num2,num3); 
  return 0;
}








