# include <stdio.h>
# include <math.h>

int main() {
  double a,b,c,d;
  printf("Enter a, b, c: ");
  scanf("%lf %lf %lf",&a,&b,&c);
  d = b*b-4*a*c;
  if(d>=0) {
    double x1 = (((-1)*b)+sqrt(d))/2/a;
    double x2 = (((-1)*b)-sqrt(d))/2/a;
    printf("Roots: %lf, %lf\n", x1,x2);
  } else {
    double re = (-1)*b/2/a, im = sqrt((-1)*d)/2/a;
    printf("Roots: %lf+%lfi, %lf-%lfi\n", re,im, re,im);
  }
  return 0;
}
