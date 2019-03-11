#include <stdio.h>
#include <dirent.h> // opendir(), readdir()

int main() {
  char *dname;
  printf("Enter dir name; enter \'.\' for current directory: ");
  scanf("%s",dname);

  DIR *d = opendir(dname);
  if (d == NULL) {
    printf("Unable to open directory %s\nPlease try again\n", dname);
    return 0;
  }
  int count = 0;
  struct dirent *de;
  while((de=readdir(d)) != NULL)
    count++;
  printf("Number of contents in %s: %d",dname,count);
  printf("\n");
  return 0;
}