// while (liczba % 2 == 0) (x << 1)

//do 11
// sizeof(unsigned) * 8 = k
//wykorzystac negacje logiczna
#include <stdio.h>

int przesuwacz(int x)
{
  int wynik_przes;
  while (x % 2 == 0)
  {
    wynik_przes = x >> 1;
    x = wynik_przes;
  }
  printf("%d\n", wynik_przes);
}

int main()
{
  przesuwacz(26);
  return 0;
}
