#include <stdio.h>

int liczba_na_slowo()
{
  int liczba, cyfra,  i = 0, j;
  char *slowa[1000];
  char *slowne_repr[] = {"Zero", "Jeden", "Dwa", "Trzy", "Cztery", "Piec", "Szesc", "Siedem", "Osiem", "Dziewiec"};
  printf("Wpisz liczbe: ");
  scanf("%d", &liczba);
  printf("\n");

  if(liczba == 0)
  {
    printf("Zero\n");
    return 0;
  }

  while(liczba)
  {
    cyfra = liczba % 10;
    liczba /= 10;
    slowa[++i] = slowne_repr[cyfra];
  }

  for(j = i; j >= 0; j--)
  {
    printf("%s ", slowa[j]);
  }
}

int main()
{
	liczba_na_slowo();
	return 0;
}
