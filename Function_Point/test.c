#include<stdio.h>
#include<stdlib.h>
#include<time.h>
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
  num3 =  P(num1,num2);
 printf("num1 = %d,num2 = %d,num3 = %d\n",num1,num2,num3); 
  return 0;
}
*/

int get_rand_num()
{
  return rand();
}
void test(int *array,size_t array_size,int(*p)())
{
  size_t i;
  for( i = 0;i < array_size;i++)
  {
    array[i] = get_rand_num();
  }
}

int main()
{
  int i;
  int array[10];
  test(array,10,get_rand_num);
  for(i = 0;i < 10;++i)
  {
    printf("%d  ",array[i]);
  }
  return 0;
}













