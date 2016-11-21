#include <stdio.h>
#include <string.h>
#define ROZMIAR 1000

struct ksiazka {
char autor[32], tytul[64];
unsigned ilosc;
float cena;
};

struct ksiazka magazyn[ROZMIAR];

float vat(float cena)
{
  printf("%f\n", 1.07 * cena);
  return 1.07 * cena;
}

int main() {
  /* code */
  char x[32] = "Michael Bababooey";
  struct ksiazka ks1;
  int i;
  float suma;
  strcpy(ks1.autor, "Michael Bababooey");
  strcpy(ks1.tytul, "Manamana - You Messed Up");
  ks1.ilosc = 10;
  ks1.cena = 10.0;
  magazyn[0] = ks1;
  for(i = 0; i < 10; i++)
  {
    printf("%d %s|%s\n", i, magazyn[i].autor, x);
    if(magazyn[i].autor == x)
    {
      printf("%f %d\n", magazyn[i].cena, magazyn[i].ilosc);
      suma += magazyn[i].cena * magazyn[i].ilosc;
      printf("%f\n", vat(suma));
    }
  }

  return 0;
}
