# include <stdio.h>
# include <math.h>

int main() {
  int m,n;
  printf("Enter range, [m,n]:");
  m = scanf("%d",&m);
  n = scanf("%d",&n);
  if(m>=n) {
    printf("Error in range! %d>%d\n",m,n);
    return 0;
  }
  int div2 = 0, div3 = 0;
  printf("Enter numbers in range [%d,%d]:\n",m,n);
  while(1) {
    int x;
    x = scanf("%d",&x);
    printf("Entered: %d\n",x);
    if(x<m || x>n)
      break;
    if(x%2==0)
      div2++;
    if(x%3==0)
      div3++;
  }
  printf("Total divisible by 2: %d, by 3: %d\n",div2,div3);
  return 0;
}