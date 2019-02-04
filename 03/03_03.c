# include <stdio.h>
# include <string.h>

char[] reverse(char str[]) {
  int n = strlen(str);
  char rev[n];
  for(int i=0; i<n; i++)
    rev[i] = str[n-i-1];
  return rev;
}

int main() {
  int n;
  printf("Enter number of characters in string: ");
  scanf("%d",&n);
  char str[n];
  printf("Enter a string: ");
  gets(str);
  char rev[] = reverse(str);
  if(strcmpi(str,rev)==0)
    printf("Palindrome!");
  else
    printf("Not palindrome");
  return 0;
}