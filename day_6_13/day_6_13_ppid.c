#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
  printf("the current program's ppid is%d",getppid());
  return 0;
}
