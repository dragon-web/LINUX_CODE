#include<stdio.h>

int main()
{
  char* str[3] = {"stra","strb","strc"};
  char* *p = str;
  int i = 0;
  while(i<3)
  {
    printf("%s\n",p++);
    ++i;
  }
  return 0;
}
