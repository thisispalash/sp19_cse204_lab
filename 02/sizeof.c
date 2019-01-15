# include <stdio.h>

int main() {
  int a = 0;
  double b = 1.0;
  char c = 'C';

  printf("I am a char with value %c and size %lu bytes\nI am an int with value %d and size %lu bytes\nI am double with value %lf and size %lu bytes\n", c,sizeof(c), a,sizeof(a), b,sizeof(b));
  return 0;
}
