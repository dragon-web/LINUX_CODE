#include<stdio.h>
#include<unistd.h>

int main(void) {
    int i = 0;
    for (i = 0; i < 2; i++) {
          pid_t fpid = fork();
              if (fpid == 0)
                    printf("hello world!\n");
                  else 
                    printf("hello world!\n");
                    
    }
      return 0;
}
