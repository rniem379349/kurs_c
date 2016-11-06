#include <stdio.h>

void showbits(unsigned int x)
{
  long i;
  for(i=(sizeof(long)*8)-1; i>=0; i--)
      (x&(1u<<i))?putchar('1'):putchar('0');

  printf("\n");
}

unsigned doPot2(unsigned x)
{
  int wykladnik = 0;
  long pot = 1;
  long pot_przes = 0;
  while (pot < x)
  {
    pot_przes = pot << 1;
    pot = pot_przes;
    wykladnik += 1;
    // printf("%ld\n", pot_przes);
    // showbits(pot_przes);
  }
  printf("Potega: %ld\n", pot_przes);
  printf("Wykladnik: %d\n", wykladnik);
}




int main()
{
  doPot2(500);
  return 0;
}
