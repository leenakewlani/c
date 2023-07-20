#include<stdio.h>
int main() {
  int a, b, c;
  a=10;
  b=20;
  printf("\n before  swapping: %d", a);
  printf("\nbefore swapping : %d", b);


  
  c = a;
  a = b;
  b = c;

  
  printf("\nAfter swapping: %d", a);
  printf("\nAfter swapping : %d", b);
  return 0;
}
