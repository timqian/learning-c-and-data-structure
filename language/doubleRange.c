// failed
#include<stdio.h>
int main() {
  double a = 1;
  double b = 10;
  while (a < b) {
    a *= 10;
    b *= 10;
  }
  printf("%lf, %lf", a, b);
};
