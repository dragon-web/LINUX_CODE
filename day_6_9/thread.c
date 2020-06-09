#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#define NUMBER_OF_THREADS 10

void print_hello_world(void *tid)
{
  printf("Hello Wor;d.Greetings from thread %d0",tid);
  pthread_exit(NULL);
}
int main()
{
    pthread_t thread[NUMBER_OF_THREADS];
    int status,i;
    for(i = 0;i < NUMBER_OF_THREADS;i++)
    {
      printf("Main here.Creating thread%d0",i);
      status = pthread_create(&thread[i],NULL,print_hello_world,(void*)i);


      if(status != 0)
      {
        printf("Oops.pthread_create returnd error_code%d0",status);
        exit(-1);
      }
    }
     exit(NULL);
}
