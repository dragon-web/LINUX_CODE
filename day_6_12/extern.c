#include<stdio.h>

extern char c;

int main()
{

  c = 'a';
  printf("%c",c);

  return 0;
}
