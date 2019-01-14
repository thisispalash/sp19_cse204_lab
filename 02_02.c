#include <stdio.h>

char[] get_whole(int n){
  return {};
}

char[] get_fract(int n){
  return {};
}

int main() {
  double n;
  printf("Enter decimal number pls: ");
  scanf("%lf",&n);
  if(n<0){
    printf("Number is negative pls try again\n");
    return 0;
  }
  if(n>1){
    char dec[] = get_whole(n), frac[] = get_fract(n);
  } else {
    char dec[] = {'0','\0'} , frac[] = get_fract(n);
  }
  printf("%lf in binary is: 0b%s.",n,dec);
  for(; i<4; i++){
    printf("%c",frac[i]);
    if(i>strlen(frac)){ break; }
  }
  if(i==4){
    printf("..");
  }
  return 0;
}
