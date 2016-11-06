#include <stdio.h>
#include <conio.h>

void showbits(unsigned int x)
{
  long i;
  for(i=(sizeof(long)*8)-1; i>=0; i--)
      (x&(1u<<i))?putchar('1'):putchar('0');

  printf("\n");
}

int char_ranger()
{
  int k;
  char maks, min;
  k = sizeof(char) * 8;
  printf("%d\n", k);
  maks = (1 << (k-1)) -1;
  min = (1 << (k-1));
  printf("Minimalna wartosc char: %d\n", min);
  printf("Maksymalna wartosc char: %d\n", maks);
}

int main()
{
  int k;
  long maks, min;
  printf("maks przed:\n");
  showbits(maks);
  printf("%ld\n", maks);
  printf("min przed:\n");
  showbits(min);
  printf("%ld\n", min);
  k = sizeof(long long) * 8;
  printf("%ld\n", k);
  maks = (1 << (k-1)) - 1;
  min = (1 << (k-1));
  printf("maks po:\n");
  showbits(maks);
  printf("%ld\n", maks);
  printf("min po:\n");
  showbits(min);
  printf("%ld\n", min);
  return 0;
}
