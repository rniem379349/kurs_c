#include <stdio.h>
#include <string.h>
#define ROZMIAR 10

struct ksiazka {
char autor[32], tytul[64];
unsigned ilosc;
float cena;
};

struct ksiazka magazyn[ROZMIAR];

float vat(float cena)
{
  return 1.07 * cena;
}

float znizka(float cena, float proc)
{
  proc = proc / 100;
  return cena - cena * proc;
}

int main() {
  /* code */
  char x[32] = "Michael";
  struct ksiazka ks1;
  int i;
  float suma;
  strcpy(ks1.autor, "Michael");
  strcpy(ks1.tytul, "Manamana");
  ks1.ilosc = 10;
  ks1.cena = 10.0;
  magazyn[0] = ks1;
  for(i = 0; i < ROZMIAR; i++)
  {
    printf("%s\n%s\n", magazyn[i].autor, x);
    if(x != magazyn[i].autor)
    {
      printf("%f %d\n", magazyn[i].cena, magazyn[i].ilosc);
      suma += magazyn[i].cena * magazyn[i].ilosc;
      printf("%f\n", vat(suma));
    }
    // if(magazyn[i].ilosc > 100)
    // {
    //   magazyn[i].cena = znizka(magazyn[i].cena, 20);
    //   printf("%f\n", magazyn[i].cena);
    // }
  }
  return 0;
}
