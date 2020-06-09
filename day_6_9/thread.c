#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#define NUMBER_OF_THREADS 10

void print_hello_world()
{
  printf("Hello World.Greetings from thread ";
  pthread_exit(NULL);
}
int main(int argc,char *argv[])
{
    pthread_t threads[NUMBER_OF_THREADS];
    int status,i;
    for(i = 0;i < NUMBER_OF_THREADS;i++)
    {
      printf("Main here.Creating thread %d0",i);
      status = pthread_create(&threads[i],NULL,print_hello_world;


      if(status != 0)
      {
        printf("Oops.pthread_create returnd error_code %d0,status);
        exit(-1);
      }
    }
     exit(NULL);
}
