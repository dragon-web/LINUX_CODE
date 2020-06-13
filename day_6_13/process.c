#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(int argc,char* argv[])
{
  pid_t pid;
  if((pid = fork()) == -1)
    printf("folk error\n");
  printf("bye!\n");
  return 0;
}
