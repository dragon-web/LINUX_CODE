#include<stdio.h>
//指向函数的指针变量没有指针的++ --
//函数指针中的形参可有可无
/*
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
  num3 =  (*P)(num1,num2);
 printf("num1 = %d,num2 = %d,num3 = %d\n",num1,num2,num3); 
  return 0;
}
#include<stdio.h>
void FileFunc()
{
  printf("FileFunc\n");
}
void EditFunc()
{
  printf("EditFunc\n");
}
int main()
{
  typedef void(*funcp)();
  funcp pfun=FileFunc;
  pfun();
  pfun=EditFunc;
  pfun();
  return 0;
}
*/
#include<stdio.h>
void Print_Message1(int a,int b)
{ 
 printf("num1 = %d,num2 = %d\n",a,b);
}

void Print_Message2(int a,int b)
{
  printf("数1 = %d，数2 = %d\n",a,b);
} 
void Print_Message3(int a,int b)
{
  printf("你好啊\n");
}

int main()
{
  void (*p[3])(int,int);
  p[1] = Print_Message1;
  p[2] = Print_Message2;
 (*p[1])(1,2);
 (*p[2])(2112,221);
  return 0;
}











