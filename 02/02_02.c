#include <stdio.h>

int main() {
  double n;
  printf("Enter decimal number pls: ");
  scanf("%lf",&n);
  if(n<0){
    printf("Number is negative pls try again\n");
    return 0;
  }
  if(n>1){
    printf("Number is too big senpai!\n");
    return 0;
  }
  char bin[4];
  int counter = 0;
  while(counter<4){
    n*=2;
    if(n == 1.0){
      strcat(bin,"1");
      break;
    }
    if(n>1.0) {
      strcat(bin,"1");
      n--;
    }
    else
      strcat(bin,"0");
    counter++;
  }
  printf("Binary: 0b0.%s",&bin);
  if(counter==4)
    printf("..\n");
  else
    printf("\n");
  return 0;
}
