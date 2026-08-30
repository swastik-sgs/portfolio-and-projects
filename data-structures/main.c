#include<stdio.h>
int main() {
  int a;
  printf("write any number a: ");
  scanf("%d", & a);

  int b;
  printf("write any number b: ");
  scanf("%d", & b);

  printf("perimeter of rectangle is %d", 2*(a+b));
  return 0;
}