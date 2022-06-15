#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int n, i, j, min;
  scanf("%d", &n);
  int length = (n * 2) - 1;

  for (i = 0; i < length; i++)
  {
    for (j = 0; j < length; j++)
    {
      min = i < j ? i : j;
      min = min < length - i ? min : length - i - 1;
      min = min < length - j - 1 ? min : length - j - 1;
      printf("%d ", n - min);
    }
    printf("\n");
  }

  return 0;
}