#include <stdio.h>
#include <time.h>
int fact(int n) {
  if (n == 0) {
    return 1;
  }
  else {
    return n * fact(n-1);
  }
}
int main() {
  int n,f;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  if (n < 0) {
    printf("No negative value\n");
    return -1;
  }
  printf("The value is %d\n", n*fact(n-1));
}u
