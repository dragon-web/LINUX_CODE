
#include<stdio.h>

void add(int *a,int n)
{
  int i;
  for(i = 1;i <= n;++i)
  {
    a[i-1] = i;
  }
}

int main()
{
  
  int a[10] = {1,2,3,4,5,6,7,8,9,10},i;
  add(a,10);
  for(i = 1;i < 10;i++)
  {
    printf("%d",a[i]);
  }
  return 0;
}
