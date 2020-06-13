#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char* argv[])
{
  int uid,euid,suid;
  getresuid(&uid,&euid,&suid);
  printf("uid = %d,euid = %d,suid = %d\n",uid,euid,suid);
  return 0;
}
