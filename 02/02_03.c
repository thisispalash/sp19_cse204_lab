#include <stdio.h>
#include <math.h>

double factorial(int n, int p){
  if(n==1)
    return p;
  return factorial(n-1,n*p);
}

int main(){
  double x;
  printf("Enter real number: ");
  scanf("%lf",&x);
  double sum = 0;
  int n = 0;
  while(1){
    double t = pow(-1.0,n);
    t *= pow(x,(2.0*n)+1);
    t /= factorial((2*n)+1,1);
    printf("\nCurrent n: %d\nCurrent t: %lf\nCurrent sum: %lf\n",n,t,sum);
    if(fabs(t)<=pow(10,-6)) // |t| ≤ 10^-6
      break;
    sum += t;
    if(n>10){
      printf("\n\tOwO\nInfite loop senpai!\n\tOwO");
      break;
    }
    n++;
  }
  printf("\n\nSum of series until %d terms: %lf\n\n",n,sum);
  return 0;
}