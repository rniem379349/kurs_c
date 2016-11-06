#include <stdio.h>


int NWD(int a, int b)
{
  while (a != b)
  {
    if (a < b)
    {
      b -= a;
    }
    else
    {
      a -= b;
    }
  }
  printf("%d \n", a);
  return a;
}

int main()
{
  NWD(28,24);
  return 0;
}
