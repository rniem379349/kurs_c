#include <stdio.h>
#include <string.h>
#define ROZMIAR 100

typedef struct
{
float wartosc;
char  nazwa[16];
} obiekt;

obiekt spis[ROZMIAR];

int compare(float x, float y)
{
  if(x > y) return 1;
  else return 0;
}

int main()
{
  int i,j;
  float temp;
  printf("%d\n",compare(2,1.3));

  for(i = 0; i < ROZMIAR; i++)
  {
    spis[i].wartosc = ROZMIAR - i;
    printf("%f\n", spis[i].wartosc);
  }

  for(i = 0; i < ROZMIAR; i++)
  {
    j = i;
    while(j > 0 && compare(spis[j-1].wartosc, spis[j].wartosc) == 1)
    {
      temp = spis[j].wartosc;
      spis[j].wartosc = spis[j-1].wartosc;
      spis[j-1].wartosc = temp;
      j -= 1;
    }
  }

  for(i = 0; i < ROZMIAR; i += 10)
  {
    printf("%f\n", spis[i].wartosc);
  }
  return 0;
}
