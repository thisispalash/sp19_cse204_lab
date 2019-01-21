# include <stdio.h>
# include <math.h>

int main() {
  int count=0;
  printf("Enter numbers to your heart\'s content:\n");
  while(1){
    int n;
    scanf("%d",&n);
    if(n<1 || n>9)
      break;
    if(n%2==0)
      count++;
  }
  printf("Number of evens: %d\n",count);
  return 0;
}
