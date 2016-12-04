#include <stdio.h>
#include <string.h>

struct slownik{
  char slowo[24];
};

typedef struct slownik ksiazka;

int main()
{
  printf("%d\n", strcmp("ayz","abc"));
  printf("%d\n", strcmp("aaz","aaz"));
  printf("%d\n", strcmp("abc","ayz"));
  int i, ilosc;
  char slowo[24];
  printf("Podaj ilosc slow: ");
  scanf("%d",&ilosc);
  struct slownik ksiazka[ilosc];
  printf("%d\n",ilosc);
  for(i = 0; i < ilosc; i++)
  {
    printf("Podaj slowo: ");
    scanf("%s", &slowo);
    strcpy(ksiazka[i].slowo, slowo);
  }

  ins_sort(ksiazka, ilosc);

  printf("Lista slow:\n");
  for(i = 0; i < ilosc; i++)
  {
    printf("Nr %d: %s\n", i, ksiazka[i].slowo);
  }
  return 0;
}

void ins_sort(ksiazka *struktura, int ilosc)
{
  int i,j;
  char *temp;
  for(i = 0; i < ilosc; i++)
  {
    j = i;
    while(j > 0 && strcmp(struktura[j-1].slowo, struktura[j].slowo) == 1)
    {
      printf("%s\n", struktura[j].slowo);
      printf("%s %s\n", struktura[j].slowo, struktura[j-1].slowo);
      strcpy(temp, struktura[j].slowo);
      strcpy(struktura[j].slowo, struktura[j-1].slowo);
      strcpy(struktura[j-1].slowo, temp);
      j -= 1;
    }
  }
}
