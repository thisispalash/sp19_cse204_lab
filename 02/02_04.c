# include <stdio.h>
# include <math.h>

int main() {
  int n;
  printf("Enter a: ");
  scanf("%d",&n);
  if(n<1) {
    printf("%d is not perfect\n",n);
  } else {
    int sum = 0;
    for(int i=1; i<n; i++) {
      if(n%i==0)
        sum += i;
    }
    if(sum==n){
      printf("%d is perfect\n",n);
    } else {
      printf("%d is not perfect\n",n);
    }
  }
  return 0;
}