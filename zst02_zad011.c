// while (liczba % 2 == 0) (x << 1)

//do 11
// sizeof(unsigned) * 8 = k
//wykorzystac negacje logiczna

#include <stdio.h>
#include <limits.h>

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

int uns_char_ranger()
{
  int k;
  unsigned char maks, min;
  k = sizeof(unsigned char) * 8;
  printf("%d\n", k);
  maks = (1 << (k)) -1;
  min = 0;
  printf("Minimalna wartosc unsigned char: %d\n", min);
  printf("Maksymalna wartosc unsigned char: %d\n", maks);
}

int short_ranger()
{
  int k;
  short maks, min;
  k = sizeof(short) * 8;
  printf("%d\n", k);
  maks = (1 << (k-1)) -1;
  min = (1 << (k-1));
  printf("Minimalna wartosc short: %d\n", min);
  printf("Maksymalna wartosc short: %d\n", maks);
}

int uns_short_ranger()
{
  int k;
  unsigned short maks, min;
  k = sizeof(unsigned short) * 8;
  printf("%d\n", k);
  maks = (1 << (k)) -1;
  min = 0;
  printf("Minimalna wartosc unsigned short: %d\n", min);
  printf("Maksymalna wartosc unsigned short: %d\n", maks);
}

int int_ranger()
{
  int k;
  int maks, min;
  k = sizeof(int) * 8;
  printf("%d\n", k);
  maks = (1 << (k-1)) -1 ;
  min = (1 << (k-1));
  printf("Minimalna wartosc int: %d\n", min);
  printf("Maksymalna wartosc int: %d\n", maks);
}

int uns_int_ranger()
{
  int k;
  unsigned int maks, min;
  k = sizeof(unsigned int) * 8;
  printf("%d\n", k);
  maks = (1 << (k)) -1;
  min = 0;
  printf("Minimalna wartosc unsigned int: %d\n", min);
  printf("Maksymalna wartosc unsigned int: %d\n", maks);
}


int long_ranger()
{
  int k;
  long maks, min;
  k = sizeof(long) * 8;
  printf("%d\n", k);
  maks = (1 << (k-1)) -1 ;
  min = (1 << (k-1));
  printf("Minimalna wartosc long: %ld\n", min);
  printf("Maksymalna wartosc long: %ld\n", maks);
}

int uns_long_ranger()
{
  int k;
  unsigned long maks, min;
  k = sizeof(unsigned long) * 8;
  printf("%d\n", k);
  maks = (1 << (k)) -1;
  min = 0;
  printf("Minimalna wartosc unsigned long: %lu\n", min);
  printf("Maksymalna wartosc unsigned long: %lu\n", maks);
}

int longlong_ranger()
{
  int k, licz;
  long long maks, min;
  k = sizeof(long long) * 8;
  printf("%d\n", k);
  maks = (1 << (k-1)) -1 ;
  min = (1 << (k-1));
  printf("Minimalna wartosc long long: %d\n", min);
  printf("Maksymalna wartosc long long: %d\n", maks);
}

int uns_longlong_ranger()
{
  int k;
  unsigned long long maks, min;
  k = sizeof(unsigned long long) * 8;
  printf("%d\n", k);
  maks = (1 << (k)) -1;
  min = 0;
  printf("Minimalna wartosc unsigned long long: %d\n", min);
  printf("Maksymalna wartosc unsigned long long: %d\n", maks);
}

int main()
{
  char_ranger();
  uns_char_ranger();
  short_ranger();
  uns_short_ranger();
  int_ranger();
  uns_int_ranger();
  long_ranger();
  uns_long_ranger();
  longlong_ranger();
  uns_longlong_ranger();
  long long int test, test2;
  // test = (1 << 31) -1;
  test2 = !(test && test2);
  // printf("%d\n", test);
  // printf("%d\n", test2);
}
