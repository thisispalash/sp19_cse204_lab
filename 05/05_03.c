// Karma
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h> // open(), O_CREAT
#include <dirent.h> // opendir(), readdir()

int main() {
  int f = fork();

  if (f==0) {
    int fd = open("05/f1.txt",O_WRONLY);
    exec("ps -ef");
  } else {

  }


  printf("\n");
  return 0;
}


// Question

// Write a program in C to create a child process using fork() system call.
// (a) One new program is loaded into the address space of the child process for displaying all the processes running on a system. The output is stored in a file and the child process sends the file name to the parent process using pipe() system call.
// (b) The parent process reads the file name and executes a program to search the PPID of the bash shell and stores the result into another file.