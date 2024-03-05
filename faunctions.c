#include <stdio.h>

int sum(int x, int y);

int main() {
  int x, y, result;

  printf("Enter the first number: ");
  scanf("%d", &x);

  printf("Enter the second number: ");
  scanf("%d", &y);

  result = sum(x, y);

  printf("The sum of %d and %d is %d\n", x, y, result);

  return 0;
}

int sum(int x, int y) {
  return x + y;
}