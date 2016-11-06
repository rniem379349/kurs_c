#include <stdio.h>

int jeden(int x, int y)
{
    while(x < 10)
    {
        x += x * (x+y);
        y = 2 - x;
        printf("\nx: %d \ny: %d \n", x,y);
    }
    return 0;
}

int jeden_for(int x, int y)
{
    for(x; x<10; x)
    {
        x += x * (x+y);
        y = 2 - x;
        printf("\nx: %d \ny: %d \n", x,y);
    }
    return 0;
}

int dwa(int x, int y)
{
  do
  {
    /* code */
    x += x * (x+y);
    y = 2 - x;
    printf("\nx: %d \ny: %d \n", x,y);
  } while(x < 10);
}

int dwa_for(int x, int y)
{
    for(x; x<10; x)
    {
      x += x * (x+y);
      y = 2 - x;
      printf("\nx: %d \ny: %d \n", x,y);
    }
    return 0;
}

int trzy(int x, int y)
{
  if (x < 10)
  {
    x += x * (x+y);
    y = 2 - x;
    printf("\nx: %d \ny: %d \n", x,y);
  }
}


int trzy_for(int x, int y)
{
  for (x; x < 10; x)
  {
    x += x * (x+y);
    y = 2 - x;
    printf("\nx: %d \ny: %d \n", x,y);
  }
}

int main()
{
    /*printf("\n1. normalnie\n");
    jeden(1,1);
    printf("\n1. z forem\n");
    jeden_for(1,1);
    printf("\n2. normalnie\n");
    dwa(1,1);
    printf("\n2. z forem\n");
    dwa_for(1,1);*/
    printf("\n3. normalnie\n");
    trzy(1,1);
    printf("\n3. z forem\n");
    trzy_for(1,1);
    return 0;
}
