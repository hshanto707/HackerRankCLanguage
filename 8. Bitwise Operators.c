#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
  // Write your code here.
  int x, y;
  int and, or, xor;
  int m1 = 0, m2 = 0, m3 = 0;
  for (x = 1; x <= n; x++)
  {
    for (y = 1; y <= n; y++)
    {
      and = x & y;
      if (and<k &&and> m1)
      {
        m1 = and;
      }

      or = x | y;
      if (or <k && or> m1)
      {
        m2 = or ;
      }

      xor = x ^ y;
      if (xor<k && xor> m1)
      {
        m3 = xor;
      }
    };
  };
}

int main()
{
  int n, k;

  scanf("%d %d", &n, &k);
  calculate_the_maximum(n, k);

  return 0;
}
