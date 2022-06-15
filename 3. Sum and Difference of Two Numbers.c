#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int a, b, intSum, intDiff;
  float x, y, floatSum, floatDiff;

  scanf("%d %d", &a, &b);
  scanf("%f %f", &x, &y);

  intSum = a + b;
  intDiff = a - b;

  floatSum = x + y;
  floatDiff = x - y;

  printf("%d %d\n", intSum, intDiff);
  printf("%.1f %.1f", floatSum, floatDiff);

  return 0;
}
