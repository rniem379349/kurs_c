#include <stdio.h>

int main()
{
  int max = -2147483648, warunek = 1, a;
  while(warunek == 1)
  {
    printf("\nPodaj liczbe (koniec programu - Ctrl+C): ");
    scanf("%d", &a);
    printf("\nPodana liczba: %d\n", a);
    if (a > max)
    {
      max = a;
    }
    printf("\nMaksymalna liczba: %d\n", max);
  }

  return 0;
}
