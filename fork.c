#include <stdio.h>
#include <unistd.h>

int main(){
  int f = fork();

  if (f == 0) {
    execl("hello_world.exe", (char*)NULL);
  } else {
    printf("%d\n", (int)getpid());
    execl("hello_world.exe", (char*)NULL);
  }

  return 0;
}