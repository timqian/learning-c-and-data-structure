// input n(<100) int numbers, then print them reversely
// usage: echo 1 2 3 4 | ./a.out(compiled file)
// in c, string is char array

#include<stdio.h>
#define MAXN 1000000 + 10
int main () {
  int i, a[MAXN], n = 0;
  while ( scanf( "%d", &a[n] ) == 1 ) {
    n++;
  }

  for(i=n-1; i>=0; i--) {
    printf("%d\n", a[i]);
  }

  return 0;
}
