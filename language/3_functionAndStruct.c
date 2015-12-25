#include<stdio.h>
#include<math.h>

typedef struct { double x, y; } Point;

double dist(Point a, Point b) {
  return sqrt( (a.x - b.x) * (a.x - b.x ) + (a.y - b.y )* (a.y - b.y));
}

int main() {
  Point a = {1.0, 2.0};
  Point b = {1.0, 2.0};
  printf("%.2lf", dist(a, b));
  return 0;
}
