#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h> // open(), O_CREAT
#include <dirent.h> // opendir(), readdir()

int main() {
  
  int f = fork();

  if(f==0) {
    printf("Child pid:%d, Parent pid:%d\n",getpid(),getppid());
    int f1 = open("./05/f1.txt",O_CREAT);
    int f2 = open("./05/f2.txt",O_CREAT);
    printf("File Descriptors: %d,%d\n",f1,f2);
    printf("closing files %d %d\n",close(f1),close(f2));
  } else {
    int id = wait();
    struct dirent *de;
    printf("Parent pid:%d, Child pid:%d\n",getpid(),id);
    DIR *d = opendir(".");
    while((de=readdir(d)) != NULL)
      printf("%s\n",de->d_name);
  }

  printf("\n");
  return 0;
}